/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:19:38 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/30 10:16:39 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dptr;
	char	*sptr;
	int i;

	char *dest;
	char *str;
	dest = (char *)dst;
	str = (char *)src;
	i = 0;
	dptr = &dest;
	sptr = &str;
	if (*dptr > *sptr)
	{
		return (0);
	}
	while (i < sizeof(n))
	{
		dest[i] = str[i];
		i++;
	}
}
