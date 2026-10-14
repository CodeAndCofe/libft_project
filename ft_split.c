/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferryat <aferryat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 06:34:05 by aferryat          #+#    #+#             */
/*   Updated: 2024/11/14 16:48:25 by aferryat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word(const char *s, char sep)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == sep)
			i++;
		if (s[i] && s[i] != sep)
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	*si(const char *s, char sep)
{
	size_t	i;
	char	*sizo;
	size_t	start;

	i = 0;
	start = 0;
	while (s[i] && s[i] != sep)
		i++;
	sizo = (char *) malloc ((i + 1) * sizeof(char));
	if (!sizo)
		return (NULL);
	while (start < i)
	{
		sizo[start] = s[start];
		start++;
	}
	sizo[start] = '\0';
	return (sizo);
}

static char	**freed(char **ptr, int i)
{
	while (i > 0)
		free(ptr[--i]);
	free(ptr);
	return (NULL);
}

static char	**evreything(char const *s, char c, char **ptr)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			ptr[i] = si(s + j, c);
			if (!ptr[i])
				return (freed(ptr, i));
			i++;
		}
		while (s[j] && s[j] != c)
			j++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ptr;

	if (s == NULL)
		return (NULL);
	words = word(s, c);
	ptr = (char **) malloc ((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	return (evreything(s, c, ptr));
}
