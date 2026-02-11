/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:10:54 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/11 19:24:55 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int			value;
	struct s_node	*next;
}	s_node;

void	controlnumb(char *argv);
char	**ft_split(char const *s, char c);
void	putinstack(char *argv, s_node	**stack_a);
long	ft_atoi(char *str);
s_node	*ft_lstnew(int value);
s_node	*ft_lstlast(s_node *lst);
void	ft_lstadd_back(s_node **lst, s_node *new);









#endif