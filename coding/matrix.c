/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:29:55 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/15 11:27:23 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	resolve2(t_node **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

static void	resolve3(t_node **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	matrixx(t_node **stack_a, t_node **stack_b)
{
	long	x;
	(void)stack_b;
	
	index(stack_a);
	x = ft_lstsize(*stack_a);
	if (x == 2)
		resolve2(stack_a);
	if (x == 3)
		resolve3(stack_a);
	if (x >= 100)
		resolve100plus(stack_a, stack_b);
}