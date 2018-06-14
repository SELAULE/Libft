/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:04:14 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/14 15:27:55 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

char	*my_strncpy(char *dst, const char *src, size_t len, size_t start)
{
	size_t		i;

	i = 0;
	while (src[start] != '\0' && i < len)
	{
		dst[i] = src[start];
		start++;
		i++;
	}
	while (dst[i])
		dst[i++] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	new = NULL;
	len = ft_strlen(s);
	if (!s)
		return (0);
	while (ft_isspace(s[i]) && s)
		i++;
	while (ft_isspace(s[len - 1]) && len)
		len--;
	if (len == 0 || ft_strlen(s) == 0)
	{
		new = "";
		return (new);
	}
	if (!(new = ft_strnew((size_t)(len - i))))
		return (NULL);
	new = my_strncpy(new, s, (len - i), (size_t)i);
	return (new);
}
