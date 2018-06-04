/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:04:32 by nselaule          #+#    #+#             */
/*   Updated: 2018/06/04 10:43:04 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
int		main()
{
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("ft_strcat = %s\n", ft_strncat(av[1], av[2], 4));
	}
	return (0);
}*/

int		main(int c, char **v)
{
	(void)c;
	printf("%i", ft_strequ(v[1], v[2]));
	return (0);
}
