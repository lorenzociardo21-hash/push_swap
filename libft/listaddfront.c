/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listaddfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:43:37 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/12 12:44:31 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}