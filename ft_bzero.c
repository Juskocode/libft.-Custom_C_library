/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:52:29 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/04 10:22:12 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <stdlib.h>
#include <unistd.h>

void	f(char c)
{
	write(1, &c, 1);
}

void	fstr(char *s)
{
	while (*s)
		write(1, s++, 1);
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

int	flen(char *s)
{
	int	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}
char	*ft_dup(char *s)
{
	char *dup;
	int	i;
	
	i = 0;
	dup = (char *)malloc(sizeof(char) * (flen(s) + 1));
	if (!dup)
		return (0);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	char *s;
	fstr(av[1]);
	fstr("\n");
	fn(flen(av[1]));
	fstr("\n");
	s = ft_dup(av[1]);
	fstr(s);
	ft_bzero(s, 4);
	fstr(s);
	return (0);
}
*/
