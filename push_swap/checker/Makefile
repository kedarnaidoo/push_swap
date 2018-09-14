# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 06:08:09 by knaidoo           #+#    #+#              #
#    Updated: 2018/09/14 15:01:24 by knaidoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
SOURCES = srcs/checker.c srcs/swap.c srcs/push.c srcs/rotate.c srcs/rotboth.c srcs/error.c
INCLUDES = ../libft/libft.a includes/get_next_line/get_next_line.c

$(NAME):
	@make -C ../libft
	@gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o checker
all: $(NAME)

clean:
	@make clean -C ../libft
	@rm -f $(NAME)

fclean: clean
	@make fclean -C ../libft
	@rm -f $(NAME)

re: fclean all
