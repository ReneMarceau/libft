# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:15:42 by rmarceau          #+#    #+#              #
#    Updated: 2022/10/18 11:57:17 by rmarceau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lift.a

SRC = *.c

all: $(NAME)

$(NAME):
	gcc -o -c $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all