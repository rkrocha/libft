/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <rkochhan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 09:53:43 by rkochhan          #+#    #+#             */
/*   Updated: 2021/03/11 03:48:21 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(long n)
{
	unsigned long	num;
	size_t			len;

	len = 1;
	if (n < 0)
	{
		num = n * -1;
		len++;
	}
	else
		num = n;
	while ((num / 10) > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
