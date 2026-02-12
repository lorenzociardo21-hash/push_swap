/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:16:56 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/12 16:41:27 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	reverserotate(t_node **stack)
{
	t_node	*temp;
	t_node	*temp2;
	int	x;

	if (!*stack || !(*stack)->next)
		return ;
	temp = ft_lstlast(*stack);
	temp2 = *stack;
	x = (ft_lstsize(*stack)) - 2;
	while((x)--)
		temp2 = temp2->next;
	temp2->next = NULL;
	temp->next = *stack;
	*stack = temp;
}

void	rra(t_node **stack_a)
{
	reverserotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverserotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverserotate(stack_a);
	reverserotate(stack_b);
	write(1, "rrr\n", 4);
}