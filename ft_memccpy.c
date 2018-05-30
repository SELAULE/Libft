/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:47:21 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/30 09:20:59 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void src, int c, size_t n)
{
	char *dest;
	char *str;
	unsigned char of_c;
	int *dptr;
	int *sptr;

	dest = (*(char *)dst);
	str = (*(char *)src);
	of_c = (*(unsigned char *)c);
	dptr = &dest;
	sptr = &str;
	while (i < n)
	{
		*sptr++ = *dptr++;
	}
	c = NULL;
	if (str++ == c)
	{
		*str = NULL;
	}
}
