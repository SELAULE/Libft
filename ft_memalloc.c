/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:52:07 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/29 14:20:48 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memory;

	if (!memory)
	{
		return (NULL);
	}
	else if (!size)
	{
		return (NULL);
	}
	memory = (void*)malloc(sizeof(*memory) * size);
	ft_memset(memory, 0, size);
	return (memory);
}
