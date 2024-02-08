/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:25:27 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/04 12:47:02 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		val;
	int		sign;

	i = 0;
	val = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if ((char)str[i] == '-' || (char)str[i] == '+')
	{
		if ((char)str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit((int)str[i]))
	{
		val = val * 10 + (str[i] - '0');
		i++;
	}
	return (sign * val);
}

/*
#include <unistd.h>

void	f(char c)
{
	write(1, &c, 1);
}

void	fn(int n)
{
	if (n == -2147483648)
	{
		f('-');
		f('2');
		fn(147483648);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		f('-');
	}
	if (n <= 9)
		f(n + '0');
	else
	{
		fn(n / 10);
		fn(n % 10);
	}
}

int	main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		fn(ft_atoi(av[i]));
		f('\n');
	}
	return (0);
}
*/
