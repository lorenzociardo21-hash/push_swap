/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:58:24 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:58:50 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_errorr(void)
{
	write (2, "Error\n", 6);
	exit (1);
}

static void	controlcaracter(char *argv)
{
	long	x;

	x = 0;
	while (argv[x])
	{
		if (argv[x] != '+' && argv[x] != '-' && argv[x] != ' '
			&& (argv[x] < '0' || argv[x] > '9'))
			ft_errorr ();
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
			ft_errorr();
		x++;
	}
}
