# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 06:10:43 by knaidoo           #+#    #+#              #
#    Updated: 2018/09/14 14:59:42 by knaidoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = srcs/main.c srcs/sort.c srcs/swap.c srcs/push.c srcs/rotate.c srcs/rotboth.c
INCLUDES = ../libft/libft.a

$(NAME):
	@make -C ../libft
	@gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o $(NAME)
all: $(NAME)

clean:
	@make clean -C ../libft
	@rm -f $(NAME)

fclean: clean
	@make fclean -C ../libft
	@rm -f $(NAME)

re: fclean all
