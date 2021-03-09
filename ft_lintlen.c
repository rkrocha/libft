/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <rkochhan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 09:53:43 by rkochhan          #+#    #+#             */
/*   Updated: 2021/03/09 10:13:07 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lintlen(long n)
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
