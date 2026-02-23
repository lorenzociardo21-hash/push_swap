/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:10:54 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 13:03:14 by lciardo          ###   ########.fr       */
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
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

void	controlnumb(char *argv);
char	**ft_split(char const *s, char c);
void	putinstack(char *argv, t_node	**stack_a);
long	ft_atoi(char *str);
t_node	*ft_lstnew(int value);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	free_stack(t_node **stack);
void	ft_errorr(void);
long	ft_lstsize(t_node *lst);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_b, t_node **stack_a);
void	rr(t_node **stack_a, t_node **stack_b);
void	rb(t_node **stack_b);
void	ra(t_node **stack_a);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
void	matrixx(t_node **stack_a, t_node **stack_b);
void	ft_lstadd_front(t_node **lst, t_node *new);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
void	indexx(t_node **stack);
int		findwindow(t_node **stack);
void	putinb(t_node **stack_a, t_node **stack_b);
int		get_pos(t_node **stack_b, int numb);
void	putina(t_node **stack_a, t_node **stack_b);
void	resolve100plus(t_node **stack_a, t_node **stack_b);
void	ft_lstclear(t_node **lst, void (*del)(void*));
void	ft_lstdelone(t_node *lst, void (*del)(void*));

#endif