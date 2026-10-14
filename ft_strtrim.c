/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:28:07 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/15 10:36:27 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cheker(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	end = ft_strlen(s1) - 1;
	start = 0;
	i = 0;
	while (s1[start] && cheker(s1[start], (char *) set))
		start++;
	while (start < end && cheker(s1[end], (char *) set))
		end--;
	ptr = (char *) malloc((end - start + 2));
	if (!ptr)
		return (NULL);
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
