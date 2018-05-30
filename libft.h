/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nselaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:55:37 by nselaule          #+#    #+#             */
/*   Updated: 2018/05/29 09:16:02 by nselaule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *str);
int		ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
void	ft_putchar(char c);
int		ft_isalnum(int c);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strcpy(char * dst, const char * src);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnew(size_t size);
#endif
