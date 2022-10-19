# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:15:42 by rmarceau          #+#    #+#              #
#    Updated: 2022/10/19 12:23:15 by rmarceau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_memcpy.c ft_bzero.c

all: archive

archive: $(NAME)
	ar -crs $(NAME) *.o

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all