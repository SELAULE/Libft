/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:02:07 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/10 16:37:56 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	to_c;
	unsigned char	*str;

	i = ft_strlen(s);
	to_c = (unsigned char)c;
	str = (unsigned char*)s;
	if (!s)
		return (0);
	while (i > 1)
	{
		if (str[i] == to_c)
			return ((char*)&str[i]);
		i--;
	}
	if (str[i] == to_c)
		return ((char*)str + i);
	return (NULL);
}
