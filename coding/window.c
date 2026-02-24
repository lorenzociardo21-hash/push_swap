/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:32:34 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 14:30:07 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findwindow(t_node **stack)
{
	int	x;
	int	window;

	x = ft_lstsize(*stack);
	if (x <= 100)
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

int	is_sorted(t_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}
