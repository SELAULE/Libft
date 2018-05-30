/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:03:02 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/30 10:45:24 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
