/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:47:21 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/05 17:27:29 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dest;
	char			*str;
	unsigned char	of_c;
	int				i;

	i = 0;
	dest = (char*)dst;
	str = (char*)src;
	of_c = (unsigned char)c;
	while (of_c <= n)
	{
		dest[i] = str[i];
		if (of_c == str[i])
			return (dest + i + 1);
	}
	i++;
}
