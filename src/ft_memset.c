/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:16:45 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/05 14:17:27 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n)
		p[--n] = c;
	return (s);
}

/*
#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	main(void)
{
	char s[] = "i know!";
	ft_memset(s, 'a', 123);
	ft_putstr(s);
	return (0);
}
*/
