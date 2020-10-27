/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:28:24 by rkochhan          #+#    #+#             */
/*   Updated: 2020/02/07 12:28:18 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void		*free_all(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	index;
	size_t	len;
	size_t	i;

	if (!s || !(strs = malloc((count_strs(s, c) + 1) * sizeof(char*))))
		return (NULL);
	index = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		if (!(strs[index++] = ft_substr(&s[i], 0, len)))
			return (free_all(strs));
		i += len;
	}
	strs[index] = NULL;
	return (strs);
}
