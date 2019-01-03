# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achavez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 17:49:31 by achavez           #+#    #+#              #
#    Updated: 2019/01/02 17:16:36 by achavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEAD	= libft.h
CC		= gcc
SRC		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strlen.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcpy.c ft_strdup.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strncpy.c ft_iterupchar.c ft_upstring.c ft_isascii.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_strndup.c ft_iota.c ft_function_test1.c ft_strnlen.c main.c
FLAG	= -Wall -Wextra -Werror -I. -c

OBJ		= $(SRC:.c=.o)

gcc:
	$(CC) $(FLAG) $(SRC)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

main:
	gcc main.c -L. -lft

re: fclean all
