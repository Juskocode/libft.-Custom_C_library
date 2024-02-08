/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:03:37 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/06 22:48:23 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, const char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	auto size_t i = 0, size = 0, j = 0;
	auto char **split = malloc(sizeof(char *)
		* (ft_countwords(s, c) + 1));
	if (!split)
	{
		*split = NULL;
		return (NULL);
	}
	while (s[i])
	{
		size = 0;
		while (s[i] == c)
			i++;
		while (s[i + size] != c && s[i + size])
			size++;
		if (size)
		{
			split[j] = ft_substr(s, i, size);
			j++;
		}
		i += size;
	}
	split[j] = NULL;
	return (split);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	*s;
	char		c;
	char		**octets;
	int			n;

	s = "144.107.56.234";
	c = '.';
	octets = ft_split(s, c);
	n = ft_countwords(s, c);
	for (int i = 0; i < n; i++)
		printf("%s\n", octets[i]);
	return (0);
}
*/
