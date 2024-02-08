/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:50:38 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/05 11:57:20 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	n = ft_strlen(src);
	if (!size)
		return (n);
	if (size <= j)
		return (size + n);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
