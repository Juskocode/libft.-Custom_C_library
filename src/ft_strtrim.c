/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:31:20 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/05 22:24:55 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	int	ft_istrim(const char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
*/

static char	*ft_strchrr(const char *s, int c)
{
	while (*s)
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char	*trim;

	i = 0;
	j = 0;
	k = 0;
	while (ft_strchrr(set, (int)s1[i]))
		i++;
	while (s1[i + j])
		j++;
	while (ft_strchrr(set, (int)s1[j]))
		j--;
	trim = (char *)malloc(sizeof(char) * (j + 2));
	if (!trim)
		return (NULL);
	while (k < j + 1)
	{
		trim[k] = s1[i + k];
		k++;
	}
	trim[k] = '\0';
	return (trim);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	*set = ", ";
	char const	*s1 = "ab cd  f    ";
	char		*trim = ft_strtrim(s1, set);
	printf("%s", trim);
	free(trim);
	return (0);	
}
*/
