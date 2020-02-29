# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achavez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 17:49:31 by achavez           #+#    #+#              #
#    Updated: 2019/04/24 18:35:14 by achavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc 

SRC		= -c src/libft/*.c src/printf/*.c

FLAG	= -Wall -Wextra -Werror

O		= *.o

I = -I ./includes

L = -L / -lft

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(I) $(SRC)
	ar rc $(NAME) $(O)
	ranlib $(NAME)

clean:
	@rm -rf $(O)

fclean: clean
	@rm -rf $(NAME)

reclean: re
	rm -rf $(O)

test:reclean
	gcc main.c -I ./includes -L ./ -lft $(I)
	cat main.c
	./a.out

re: fclean all
