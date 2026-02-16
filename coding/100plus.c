/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100plus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:27:41 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/16 12:05:38 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	findwindow(t_node **stack)
{
	int x;
	int window;

	x = ft_lstsize(*stack);
	if ( x <= 100)
		window = 15;
	if (x >= 101 && x <= 200)
		window = 23;
	if (x >= 201 && x <= 300)
		window = 30;
	if (x >= 301 && x <= 400)
		window = 37;
	if (x >= 401)
		window = 43;
	return (window);
}

void	putinb(t_node **stack_a, t_node **stack_b)
{
	int 	i;
	int 	window;

	window = findwindow (stack_a);
	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_b, stack_a);
			if (ft_lstsize(*stack_b) > 1)
				rb(stack_b);
			i ++;
		}
		else if ((*stack_a)->index <= i + window)
		{
			pb(stack_b, stack_a);
			i++;
		}
		else
			ra(stack_a);
	}
}

int	get_pos(t_node **stack_b, int numb)
{
	int		x;
	t_node	*curr;
	
	curr = *stack_b;
	x = 0;
	while(curr)
	{
		if ((curr)->index == numb)
			return (x);
		x++;
		curr = curr->next;
	}
	return (0);
}

void	putina(t_node **stack_a, t_node **stack_b)
{
	int	target;
	int	pos;
	int	size;

	target = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		pos = get_pos(stack_b, target);
		size = ft_lstsize(*stack_b);
		if (pos <= size / 2)
		{
			while (pos--)
				rb(stack_b);
		}
		else
		{
			pos = size - pos; 
			while (pos--)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
		target--;
	}
}

void	resolve100plus(t_node **stack_a, t_node **stack_b)
{
	putinb(stack_a, stack_b);
	putina(stack_a, stack_b);
}