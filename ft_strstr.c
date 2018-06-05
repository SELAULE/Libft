/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:35:58 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/05 15:28:30 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = NULL;
	i = 0;
	if (needle[0] == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j] != '\0')
			{
				ptr = ((char*)&needle[j]);
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
