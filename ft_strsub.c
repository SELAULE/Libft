/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:52:31 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/04 17:08:07 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int	i;
	char *fresh;

	i = 0;
	if (!fresh)
		return (0);
	fresh = (char*)malloc((char) * len)
	while (s[start] != '\0')
	{
		while (start <= len)
		{
			fresh[i] = s[start];
			i++;
			start++;
		}
	}	   
	return (fresh);   
}
