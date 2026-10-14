/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:34:21 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/15 10:37:15 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dt;
	unsigned const char		*sc;
	size_t					i;

	dt = dest;
	sc = src;
	if (dest == src)
		return (dest);
	if (dt < sc)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dt[i - 1] = sc[i - 1];
			i--;
		}
	}
	return (dest);
}
