# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albagar4 <albagar4@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 18:34:20 by albagar4          #+#    #+#              #
#    Updated: 2024/02/14 14:39:53 by albagar4          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = ft_printf.c ft_print_char.c ft_print_str.c ft_print_hex_lower.c \
		ft_print_ptr.c ft_print_hex_upper.c ft_print_nbr.c ft_print_unsigned.c \

OBJS = $(SOURCE:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: libft $(NAME)

 $(NAME):  $(OBJS)
	ar rcs $(NAME) $(OBJS)

 $(OBJS):
	$(CC) $(CFLAGS) -c $(SOURCE)

libft:
	make -C libft/ all

clean:
	$(RM) $(OBJS)
	make -C libft/ clean

fclean: clean
	$(RM) $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all libft clean fclean re
