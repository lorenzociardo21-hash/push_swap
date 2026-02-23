/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:50:03 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:54:34 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_lstsize(t_node *lst)
{
	long	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count ++;
	}
	return (count);
}
