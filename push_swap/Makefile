# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 06:07:42 by knaidoo           #+#    #+#              #
#    Updated: 2018/09/14 11:50:05 by knaidoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: $(NAME)

$(NAME):
	@mkdir $(NAME)
	make -C libft
	make -C checker
	make -C push_swap

clean:
	@rm -rf $(NAME)
	make clean -C libft

fclean: clean
	make fclean -C libft

re: fclean all
