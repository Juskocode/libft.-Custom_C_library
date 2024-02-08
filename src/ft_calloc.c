/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <aaires-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:51:02 by aaires-d          #+#    #+#             */
/*   Updated: 2024/02/04 13:06:45 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t sizec)
{
	char	*p;

	p = (char *)malloc(n * sizec);
	if (!p)
		return (0);
	return (ft_memset(p, 0, n * sizec));
}
