/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:45:09 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/12 16:46:44 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

long	ft_atoi(char *str)
{
	long	x;
	long	s;
	long	n;

	if (!str)
		return 	(0);
	x = 0;
	n = 0;
	s = 1;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			s = s * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		n = n * 10 + (str[x] - '0');
		x++;
	}
	n = n * s;
	return (n);
}