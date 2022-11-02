# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:15:42 by rmarceau          #+#    #+#              #
#    Updated: 2022/11/01 20:10:19 by rmarceau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
RM = /bin/rm -f
AR = ar crs

SRCS = ft_isalpha.c \
 	ft_isdigit.c    \
	ft_isalnum.c    \
	ft_isascii.c    \
	ft_isprint.c    \
	ft_strlen.c     \
	ft_memset.c     \
	ft_bzero.c      \
	ft_memcpy.c     \
	ft_memmove.c    \
	ft_strlcpy.c    \
	ft_strlcat.c    \
	ft_toupper.c    \
	ft_tolower.c    \
	ft_strchr.c     \
	ft_strrchr.c    \
	ft_strncmp.c    \
	ft_memchr.c     \
	ft_memcmp.c     \
	ft_strnstr.c    \
	ft_atoi.c       \
	ft_calloc.c     \
	ft_strdup.c     \
	ft_substr.c     \
	ft_strjoin.c    \
	ft_strtrim.c    \
	ft_strmapi.c    \
	ft_striteri.c   \
	ft_putchar_fd.c \
	ft_putstr_fd.c  \
	ft_putendl_fd.c \
	ft_putnbr_fd.c  \




all: $(NAME)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re