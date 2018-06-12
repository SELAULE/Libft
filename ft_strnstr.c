/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:15:56 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/12 17:21:53 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	holder(char *str1, char *str2, size_t len, size_t index)
{
	size_t	i;

	i = -1;
	while (str1[index] == str2[++i] && index < len && str1[index])
		len++;
	index++;
	if (str2[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)&haystack[i]);
	while (haystack[i] != '\0' && i != len)
	{
		if (haystack[i] == needle[len])
		{
			if (holder((char*)haystack, (char*)needle, len, i))
				break ;
		}
		i++;
	}
	return (0);
}
