# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:15:42 by rmarceau          #+#    #+#              #
#    Updated: 2022/11/18 12:50:06 by rmarceau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f
AR = ar crs

SRCS_PATH = src/

FTIS =  alpha digit alnum ascii print
FTMEM = bzero memset memcpy memmove memchr memcmp calloc
FTSTR = len lcpy lcat chr rchr ncmp nstr dup join trim mapi iteri
FTTO = ft_toupper ft_tolower ft_atoi ft_itoa
FTSUB = substr split
FTPUT = char_fd str_fd endl_fd nbr_fd nbr_base_fd
FTLST = new add_front size last add_back delone clear iter map

SRCS = $(addsuffix .c, $(addprefix $(SRCS_PATH)ft_is/ft_is, $(FTIS))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_mem/ft_, $(FTMEM)))    \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_str/ft_str, $(FTSTR))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_to/, $(FTTO)))         \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_sub/ft_, $(FTSUB)))    \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_put/ft_put, $(FTPUT))) \

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(addsuffix .c, $(addprefix $(SRCS_PATH)ft_lst/ft_lst, $(FTLST)))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(NAME): $(OBJS)
	-@$(AR) $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	-@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	-@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	-@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re