# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achavez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/04 17:21:50 by achavez           #+#    #+#              #
#    Updated: 2019/03/08 15:50:30 by achavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ./src/*.c ./libft/*.c

O = *.o

I = -I ./libft -I ./includes

L = -L ./libft -lft

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(I) $(SRCS) -c
	ar rcs $(NAME) $(O)
	ranlib $(NAME)

clean:
	rm -rf $(O)

fclean: clean
	rm -rf $(NAME)

re: fclean all

reclean: re
	rm -rf $(O)

test: reclean
	gcc main.c -I ./printf/includes -L ./ -lftprintf
	./a.out
