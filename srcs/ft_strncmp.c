/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:00:03 by rkochhan          #+#    #+#             */
/*   Updated: 2020/02/01 16:50:32 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1cmp;
	const unsigned char *s2cmp;

	i = 0;
	s1cmp = (unsigned char *)s1;
	s2cmp = (unsigned char *)s2;
	while (i < n && s1cmp[i] && s2cmp[i])
	{
		if (s1cmp[i] != s2cmp[i])
			return (s1cmp[i] - s2cmp[i]);
		i++;
	}
	if (i < n && s1cmp[i] != s2cmp[i])
		return (s1cmp[i] - s2cmp[i]);
	else
		return (0);
}
