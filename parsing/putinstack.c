/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putinstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:15:12 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/24 15:34:06 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char **str, int y, t_node **stack)
{
	(void) y;
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
	if (stack && *stack)
	{
		free_stack(stack);
		*stack = NULL;
	}
	write(2, "Error\n", 6);
	exit(1);
}

void	check_duplicates(t_node **stack)
{
	t_node	*current;
	t_node	*check;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (current->value == check->value)
				ft_error(NULL, 0, stack);
			check = check->next;
		}
		current = current->next;
	}
}

static	int	intostack(char	**str, t_node **stack_a)
{
	long	x;
	long	tempnumb;
	t_node	*newnode;

	x = 0;
	while (str[x])
	{
		tempnumb = ft_atoi (str[x]);
		if (tempnumb > INT_MAX || tempnumb < INT_MIN)
			ft_error (str, x, stack_a);
		newnode = ft_lstnew ((int) tempnumb);
		if (!newnode)
    		ft_error(str, x, stack_a);
		ft_lstadd_back (stack_a, newnode);
		x++;
	}
	return (x);
}

void	putinstack(char *argv, t_node **stack_a)
{
	char	**str;
	int		x;

	str = ft_split (argv, ' ');
	if (!str || !str[0])
		ft_error(str, 0, stack_a);
	x = intostack (str, stack_a);
	while (x--)
		free (str[x]);
	free (str);
	check_duplicates (stack_a);
}
