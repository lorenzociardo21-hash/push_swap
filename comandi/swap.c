/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:25:25 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:52:28 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **stack)
{
	t_node	*a;
	t_node	*b;
	long	x;

	x = ft_lstsize (*stack);
	if (x <= 1)
		return ;
	a = *stack;
	b = a->next;
	a->next = b->next;
	b->next = a;
	*stack = b;
}

void	sa(t_node **stack_a)
{
	swap (stack_a);
	write (1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	swap (stack_b);
	write (1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap (stack_a);
	swap (stack_b);
	write (1, "ss\n", 3);
}
