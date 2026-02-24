/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:58:24 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/24 13:12:32 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	controlcaracter(char *argv)
{
	long	x;

	x = 0;
	while (argv[x])
	{
		if (argv[x] != '+' && argv[x] != '-' && argv[x] != ' '
			&& (argv[x] < '0' || argv[x] > '9'))
			ft_error (NULL, 0, NULL);
		x++;
	}
}

void	controlnumb(char *argv)
{
	long	x;

	controlcaracter (argv);
	x = 0;
	while (argv[x])
	{
		if ((argv[x] == '+' || argv[x] == '-')
			&& (argv[x + 1] < '0' || argv[x + 1] > '9'))
			ft_error (NULL, 0, NULL);
		x++;
	}
}
