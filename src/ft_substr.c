/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:14:35 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/05 14:45:21 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	if (!s1)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (start <= i && j < len)
		{
			substr[j] = s1[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
