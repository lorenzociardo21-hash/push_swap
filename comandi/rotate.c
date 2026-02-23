/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:03:26 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:51:38 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
	ft_lstadd_back (stack, temp);
}

void	ra(t_node **stack_a)
{
	rotate (stack_a);
	write (1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate (stack_b);
	write (1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate (stack_a);
	rotate (stack_b);
	write (1, "rr\n", 3);
}
