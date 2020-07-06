/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:46:09 by rkochhan          #+#    #+#             */
/*   Updated: 2020/02/02 15:33:25 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *)b;
	chr = (unsigned char)c;
	while (len--)
		*ptr++ = chr;
	return (b);
}
