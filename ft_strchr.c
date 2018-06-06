/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:45:09 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/06 17:34:08 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	to_c;
	char	*str;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	to_c = (char)c;
	str = (char*)s;
	while (i < len)
	{
		if (to_c == str[i])
			return (str + 1);
		else
			return (0);
		i++;
	}
	return (0);
}
