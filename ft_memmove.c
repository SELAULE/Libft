/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:22:37 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/06 17:33:00 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*dest;
	size_t				i;
	size_t		j;

	i = 0;
	j = len;
	str = (unsigned char*)src;
	dest = (unsigned char*)dst;
	if (str < dest)
		return (dest);
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
