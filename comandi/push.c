/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:32:40 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/12 13:05:03 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	push(t_node **stack_a, t_node **stack_b)
{
	t_node	*swapper;

	if (!*stack_b)
		return;
	swapper = *stack_b;
	*stack_b = (*stack_b)->next;
	swapper->next = NULL;
	ft_lstadd_front(stack_a,swapper);
	
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pb\n", 3);
}

