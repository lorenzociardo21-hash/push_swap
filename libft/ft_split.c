/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:31:18 by lciardo           #+#    #+#             */
/*   Updated: 2026/02/23 12:55:22 by lciardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	str_free(char **str, int y)
{
	while (y--)
		free(str[y]);
	free(str);
}

static int	countw(char const *s, char c)
{
	int	x;
	int	words;
	int	count;

	x = 0;
	words = 0;
	count = 0;
	while (s[x])
	{
		if (s[x] == c)
			words = 0;
		else if (words == 0)
		{
			words = 1;
			count++;
		}
		x++;
	}
	return (count);
}

static int	lenwords(char const *s, char c, int x)
{
	int	count;

	count = 0;
	while (s[x] && s[x] != c)
	{
		count++;
		x++;
	}
	return (count);
}

static char	**matrix(char const *s, char c, char **str)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s[x])
	{
		if (s[x] == c)
			x++;
		else
		{
			str[y] = ft_substr(s, x, lenwords(s, c, x));
			if (!str[y])
				return (str_free(str, y), NULL);
			y++;
			x = x + (lenwords(s, c, x));
		}
	}
	str[y] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc ((countw(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (matrix(s, c, str));
}
