/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:29:55 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:44:59 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	resolve2(t_node **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

static void	resolve3(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->index;
	b = (*stack_a)->next->index;
	c = (*stack_a)->next->next->index;
	if (a < b && b > c && a < c)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (a > b && b < c && a < c)
		sa(stack_a);
	else if (a < b && b > c && a > c)
		rra(stack_a);
	else if (a > b && b < c && a > c)
		ra(stack_a);
	else if (a > b && b > c && a > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

static void	resolve4(t_node **stack_a, t_node **stack_b)
{
	int	pos;
	int	size;
	int	x;

	x = 0;
	pos = get_pos(stack_a, x);
	size = ft_lstsize(*stack_a);
	if (pos <= size / 2)
	{
		while (pos--)
			ra(stack_a);
	}
	else
	{
		pos = size - pos;
		while (pos--)
			rra(stack_a);
	}
	pb(stack_b, stack_a);
	resolve3(stack_a);
}

static void	resolve5(t_node **stack_a, t_node **stack_b)
{
	int	pos;
	int	size;
	int	x;

	x = 0;
	x = 0;
	while (x <= 1)
	{
		pos = get_pos(stack_a, x);
		size = ft_lstsize(*stack_a);
		if (pos <= size / 2)
		{
			while (pos--)
				ra(stack_a);
		}
		else
		{
			pos = size - pos;
			while (pos--)
				rra(stack_a);
		}
		pb(stack_b, stack_a);
		x++;
	}
	resolve3(stack_a);
}

void	matrixx(t_node **stack_a, t_node **stack_b)
{
	long	x;

	indexx(stack_a);
	x = ft_lstsize(*stack_a);
	if (x == 2)
		resolve2(stack_a);
	else if (x == 3)
		resolve3(stack_a);
	else if (x == 4)
	{
		resolve4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (x == 5)
	{
		resolve5(stack_a, stack_b);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else
		resolve100plus(stack_a, stack_b);
}
