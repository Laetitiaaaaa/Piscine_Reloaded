# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llejeune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 09:38:30 by llejeune          #+#    #+#              #
#    Updated: 2018/11/08 13:15:29 by llejeune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/*c

HDR = includes/*h

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) *.o $(HDR)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all
