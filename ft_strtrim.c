/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:04:14 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/04 16:21:52 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;
	int	k;
	char *fresh;

	i = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ') || (s[j] == '\t') || (s[j] == '\n'))
		j--;
	k = (ft_strlen(s) - (j + - i) + 1);
	fresh = (char*)malloc(sizeof(k) + 1);
	if (!fresh)
		return (0);
	while (s[k] != '\0')
	{
		fresh[i] = s[k];
		k++;
		i++;
	}
	return (fresh);
}
