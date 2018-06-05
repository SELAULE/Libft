/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:54:45 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/05 13:50:41 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	if (size == 0)
		return (NULL);
	else if (!(s = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i <= size)
		s[i++] = '\0';
	return (s);
}
