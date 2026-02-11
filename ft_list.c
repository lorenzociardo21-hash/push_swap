/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:22:46 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/11 19:24:37 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

s_node	*ft_lstnew(int value)
{
	s_node	*node;

	node = malloc (sizeof(s_node));
	if (!node)
		return (NULL);
	node -> value = value;
	node -> next = NULL;
	return (node);
}

s_node	*ft_lstlast(s_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void	ft_lstadd_back(s_node **lst, s_node *new)
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