/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:30:34 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/16 10:01:33 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copy_len;
	size_t	i;
	size_t	src_len;

	copy_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (src_len >= dstsize)
		copy_len = dstsize - 1;
	else
		copy_len = src_len;
	while (i < copy_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[copy_len] = '\0';
	return (src_len);
}
