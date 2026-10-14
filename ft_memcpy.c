/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:42:13 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/15 10:38:50 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	source = (unsigned char *) src;
	dest = (unsigned char *) dst;
	i = 0;
	if (!dest && !src && n > 0)
		return (NULL);
	while (dst != src && i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
