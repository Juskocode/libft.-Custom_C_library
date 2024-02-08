/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:34:15 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/08 09:43:15 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
	{
		if ((unsigned char)(s1[i]) != (unsigned char)s2[i])
			return ((unsigned char)s1[i] != (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char )s1[i] - (unsigned char )s2[i]);
	return (0);
}
/*
#include <unistd.h>

void	f(char c)
{
	write(1, &c, 1);
}

void	fn(int n)
{
	if (n <= 9)
		f(n + '0');
	else
	{
		fn(n / 10);
		fn(n % 10);
	}
}

int	main(void)
{
	const char s1[] = "abcsd";
	const char s2[] = "abcad";

	fn(ft_strncmp(s1, s2, 4));
	return (0);
}
*/
