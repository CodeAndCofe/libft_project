/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:33:30 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/04 19:09:20 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_minus(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

static int	rtn(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	long long int	result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = is_minus(str[i]);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (LLONG_MAX - (str[i] - '0')) / 10)
			return (rtn(sign));
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
