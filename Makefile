# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opodolia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/08 19:50:07 by opodolia          #+#    #+#              #
#    Updated: 2017/03/06 12:49:53 by opodolia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJECTS = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
		  ft_isdigit.o ft_isprint.o ft_itoa.o ft_lstadd.o ft_lstdel.o \
		  ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_sqrt.o \
		  ft_lstsize.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
		  ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o \
		  ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
		  ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_quicksort.o \
		  ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o \
		  ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o \
		  ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o \
		  ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o \
		  ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o ft_strsub.o \
		  ft_strtrim.o ft_swap.o ft_tolower.o ft_toupper.o ft_itoa_base.o \
		  ft_strnlen.o ft_uitoa_base.o ft_wclen.o ft_wcslen.o ft_wctomb.o \
		  ft_wcstombs.o

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all
