/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:15:56 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/01 09:36:28 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		*ptr;

	i = 0;
	while (len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[i] != '\0')
			{
				ptr = ((char*)&haystack[i]);
				return (ptr);
			}
			else
				return (ptr);
			j++;
		}
		i++;
	}
	return (NULL);
}
