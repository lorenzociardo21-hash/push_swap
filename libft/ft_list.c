/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:22:46 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:55:03 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(int value)
{
	t_node	*node;

	node = malloc (sizeof(t_node));
	if (!node)
		return (NULL);
	node -> value = value;
	node -> next = NULL;
	return (node);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

void	free_stack(t_node **stack)
{
	t_node	*temp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	ft_errorr();
}
