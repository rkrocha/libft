/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:23:07 by rkochhan          #+#    #+#             */
/*   Updated: 2020/02/07 12:59:20 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	itoa_len(long num)
{
	size_t	len;

	len = 1;
	if (num < 0)
		len++;
	while ((num / 10) != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;
	size_t	i;

	num = n;
	len = itoa_len(num);
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (num < 0)
	{
		str[i] = '-';
		num *= -1;
		i++;
	}
	while ((num / 10) > 0 && len > i)
	{
		str[len - 1] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	str[i] = (num % 10) + 48;
	return (str);
}
