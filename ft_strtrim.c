/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:04:14 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/04 16:21:52 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;
	char *fresh;

	i = 0;
	while (i = ' ' || '\t' || '\n')
		i++;
	j = ft_strlen(s) - 1;
	while (j = ' ' || '\t' || '\n')
		j--;
	k = (ft_strlen(s) - j + - i)
	fresh = (char*)malloc(k) + 1;
	return (fresh);
}
