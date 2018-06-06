/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:20:49 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/06 16:19:15 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	size_t			j;

	j = (int)n;
	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		if ((unsigned char)c == str[i])
			return (str);
		else
			return (0);
		i++;
	}
	return (str);
}
