/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:54:45 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/30 11:00:30 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (!size)
		return (NULL);
	else if (!(s = (char*)malloc(sizeof(size) + 1)))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
