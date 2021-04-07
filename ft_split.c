/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <rkochhan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:28:24 by rkochhan          #+#    #+#             */
/*   Updated: 2021/04/07 11:29:10 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_all(char **strs)
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
			continue ;
		}
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static bool	alloc_array(char ***array, size_t size)
{
	**array = (char *)malloc(size);
	if (!(**array))
		return (false);
	*array[size] = NULL;
	return (true);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	index;
	size_t	len;
	size_t	i;

	if (!s || !alloc_array(&strs, (count_strs(s, c) + 1) * sizeof(char *)))
		return (NULL);
	index = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		strs[index++] = ft_substr(&s[i], 0, len);
		if (!strs[index])
			return (free_all(strs));
		i += len;
	}
	return (strs);
}
