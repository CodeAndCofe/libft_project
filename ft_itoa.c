/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:38:43 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/15 09:22:18 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	signer(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*result;

	len = ft_num_len(n);
	sign = signer(n);
	result = (char *) malloc ((len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (n)
	{
		result[--len] = '0' + (sign * (n % 10));
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
