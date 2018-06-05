/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:25:02 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/05 11:55:27 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	k;
	char *fresh;

	if (!s1 || !s2)
		return (0);
	k = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	fresh = (char*)malloc(sizeof(char) * k);
	if (!fresh)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		fresh[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		fresh[i] = s2[j];
		j++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
