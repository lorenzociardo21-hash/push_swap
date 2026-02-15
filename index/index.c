/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 09:41:45 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/15 10:31:44 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	index(t_node **stack)
{
	t_node	*current;
	t_node	*check;
	int		ind;

	current = *stack;
	while (current)
	{
		check = *stack;
		ind = 0;
		while (check)
		{
			if (current->value > check->value)
				ind++;
			check = check->next;
		}
		current->index = ind;
		current = current->next;
	}
}