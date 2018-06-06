/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:15:55 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/06 14:18:45 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	j;
	int sign;

	j = 0;
	sign = 1;
	while (*str == '\t' || *str == ' ' || *str == '\r' || *str == '\n' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		j = (j * 10) + (*str++ - '0');
	return (sign * j);
}
