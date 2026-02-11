/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:58:24 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/11 15:04:04 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void ft_error()
{
	write (2, "Error\n", 6);
	exit(1);
}

static void controlcaracter(char *argv)
{
	long	x;
	
	x = 0;
	while (argv[x])
	{
		if (argv[x] != '+' && argv[x] != '-' && argv[x] != ' ' && (argv[x] < '0' || argv[x] > '9'))
			ft_error();
		x++;
	}
}

void	controlnumb(char *argv)
{
	long	x;
	controlcaracter(argv);
	x = 0;
	while (argv[x])
	{
		if ((argv[x] == '+' || argv[x] == '-') && (argv[x + 1] < '0' || argv[x + 1] > '9'))
			ft_error();
		x++;
	}
}