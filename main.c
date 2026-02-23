/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:29:08 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 13:02:18 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	del_node(void *content)
{
	(void)content;
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		x;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	x = 0;
	while (++x < argc)
		controlnumb(argv[x]);
	x = 0;
	while (++x < argc)
		putinstack(argv[x], &stack_a);
	matrixx(&stack_a, &stack_b);
	ft_lstclear(&stack_a, del_node);
	ft_lstclear(&stack_b, del_node);
	return (0);
}
