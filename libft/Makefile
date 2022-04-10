# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 00:35:03 by ede-smet          #+#    #+#              #
#    Updated: 2022/04/10 03:50:32 by ede-smet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

all: $(NAME)

FLAG: -Werror -Wall -Wextra -g

$(NAME):
	@gcc -o $(FLAG) $(NAME) ../main.c $(SRC)

clean:
	@rm -f *.o *.out *.gch

fclean: clean
	@rm -f $(NAME)

re: fclean all
