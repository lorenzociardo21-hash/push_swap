/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:50:19 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/12 16:51:11 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	x;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub = malloc ((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	x = 0;
	while (s[x + start] && x < (len))
	{
		sub[x] = s[x + start];
		x++;
	}
	sub[x] = '\0';
	return (&sub[0]);
}