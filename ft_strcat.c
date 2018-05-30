/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 12:56:51 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/30 10:43:36 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;
	char *cat;

	i = 0;
	j = 0;
	cat = (char *)malloc(sizeof(s1) + sizeof(s2));
	while (*s1 != '\0')
	{
		*cat[i] = *s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	return (cat);
}
