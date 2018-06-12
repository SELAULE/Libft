/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:03:54 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/12 17:20:46 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *src, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (src[i])
	{
		if (src[i] != '\0')
			i++;
		else
		{
			count++;
			while (src[i] != '\0' && src[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*check_words(char const *src, char c)
{
	int		i;
	char	*str;
	int		j;

	j = ft_strlen(src);
	i = 0;
	if (!(str = (char*)malloc(j + 1)))
		return (NULL);
	while (src[i] != '\0' && src[i] == c)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		num_count;
	int		x;

	if (!s)
		return (NULL);
	num_count = count_words(s, c);
	if (!(str = (char**)malloc(sizeof(*str) * (num_count+ 1))))
	return (NULL);
	x = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			str[x] = check_words(s, c);
			x++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	str = NULL;
	return (str);
}
