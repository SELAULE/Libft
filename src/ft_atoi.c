/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:15:55 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/10 16:54:52 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	j;
	int sign;
	int	x;

	j = 0;
	x = 0;
	sign = 1;
	while ((*str == '\v' || *str == '\t' || *str == '\r') ||
			(*str == '\n' || *str == ' ' || *str == '\f'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		j = (j * 10) + (*str++ - '0');
		x++;
	}
	if (x > 10 && sign < 0)
		return (0);
	if (x > 10 && sign > 0)
		return (-1);
	return (sign * j);
}
