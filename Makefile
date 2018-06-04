# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nselaule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 09:44:43 by nselaule          #+#    #+#              #
#    Updated: 2018/06/04 17:18:28 by nselaule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef LIBFT.H
#define LIBFT.H

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC =	ft_strlen.c		\
		ft_memset.c		\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strdup.c		\
		ft_isdigit.c	\
		ft_isalpha.c	\
		ft_isalnum.c	\
		ft_putchar.c	\
		ft_toupper.c	\
		ft_putstr.c		\
		ft_tolower.c	\
		ft_strcmp.c		\
		ft_strncmp.c	\
		ft_atoi.c		\
		ft_strcpy.c		\
		ft_strncpy.c	\
		ft_strstr.c		\
		ft_memalloc.c	\
		ft_putchar_fd.c	\
		ft_memdel.c		\
		ft_putendl.c	\
		ft_putendl_fd.c	\
		ft_putnbr.c		\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_strnew.c		\
		ft_strdel.c		\
		ft_strclr.c		\
		ft_striter.c	\
		ft_striteri.c	\
		ft_memcpy.c		\
		ft_bzero.c		\
		ft_strequ.c		\
		ft_strnequ.c	\
		ft_strmap.c		\
		ft_strmapi.c	\
		ft_strcat.c		\
		ft_strncat.c	\
		ft_strsub.c		\
		ft_strjoin.c	\
		#ft_memccpy.c	\

OBJ =	ft_strlen.o		\
		ft_memset.o		\
		ft_isascii.o	\
		ft_isprint.o	\
		ft_strdup.o		\
		ft_isdigit.o	\
		ft_isalpha.o	\
		ft_isalnum.o	\
		ft_putchar.o	\
		ft_toupper.o	\
		ft_putstr.o		\
		ft_tolower.o	\
		ft_strcmp.o		\
		ft_strncmp.o	\
		ft_atoi.o		\
		ft_strcpy.o		\
		ft_strncpy.o	\
		ft_strstr.o		\
		ft_memalloc.o	\
		ft_memdel.o		\
		ft_putendl.o	\
		ft_putendl_fd.o	\
		ft_putnbr.o		\
		ft_putnbr_fd.o	\
		ft_putchar_fd.o	\
		ft_putstr_fd.o	\
		ft_strnew.o		\
		ft_strdel.o		\
		ft_strclr.o		\
		ft_striter.o	\
		ft_striteri.o	\
		ft_memcpy.o		\
		ft_bzero.o		\
		ft_strequ.o		\
		ft_strnequ.o	\
		ft_strmap.o		\
		ft_strmapi.o	\
		ft_strcat.o		\
		ft_strncat.o	\
		ft_strsub.o		\
		ft_strjoin.o	\
		#ft_memccpy.o	\

all:
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	rm  -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
