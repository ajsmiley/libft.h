# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achavez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 17:49:31 by achavez           #+#    #+#              #
#    Updated: 2018/10/26 15:11:02 by achavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = test
FLAG = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(SRCS))
SRCS = *.c
OUTS = *.o
OBJS = $(SRCS:.c=.c)

all: $(NAME)

$(NAME):
	@mkdir -p ./bin
	@$(CC) $(FLAG) $(INCLUDE) $(SRC) -o $(NAME)

clean:
	@rm -f $(OUTS)
	@rm -f ./bin/$(OUTS)

fclean: clean
	@rm -rf ./bin
	@rm -f $(NAME)

re: fclean all
