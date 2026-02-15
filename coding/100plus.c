/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100plus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:27:41 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/15 12:30:05 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

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