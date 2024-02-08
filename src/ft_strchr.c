/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:23:35 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/07 22:25:05 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if ((s[i] == (char)c))
			return ((char *)(s + i));
		s++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
