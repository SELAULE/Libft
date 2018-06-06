/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:04:14 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/06 16:56:02 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		f;
	char	*fresh;

	i = 0;
	f = 0;
	if (!s)
		return (0);
	while (((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n')) && (s[i] != '\0'))
		i++;
	if (s[i] == '\0')
	{
	fresh = ft_strnew(1);
		return (fresh);
	}
	j = ft_strlen((char*)s);
	while ((s[j] == ' ') || (s[j] == '\t') || (s[j] == '\n') || (s[j] == '\0'))
		j--;
	k = (j - i + 1);
	if (!(fresh = ft_strnew(k)))
		return (0);
	while (i <= j && s[i] != '\0')
	{
		fresh[f] = s[i];
		i++;
		f++;
	}
	fresh[f] = '\0';
	return (fresh);
}
