/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putinstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:15:12 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/11 19:54:21 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	ft_error (char **str, int y)
{
	while (y--)
		free(str[y]);
	free(str);
	write (2, "Error\n", 6);
	exit(1);
}


static	int	intostack(char	**str, s_node **stack_a)
{
	long	x;
	long	tempnumb;
	s_node	*newnode;
	s_node	*tempnode;
	
	x = 0;
	while(str[x])
	{
		tempnumb = ft_atoi(str[x]);
		if (tempnumb > INT_MAX || tempnumb < INT_MIN)
			ft_error (str, x);
		newnode = ft_lstnew((int) tempnumb);
		ft_lstadd_back(stack_a, newnode);
		x++;
	}
	return (x);
}

void	putinstack(char *argv, s_node	**stack_a)
{
	char	**str;
	int		x;
	str = ft_split (argv, ' ');
	x = intostack (str, stack_a);
	while (x--)
		free(str[x]);
	free(str);
}
