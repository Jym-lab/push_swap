# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 13:51:37 by yjoo              #+#    #+#              #
#    Updated: 2022/04/20 17:05:32 by yjoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft
AR = ar rcs
NAME = push_swap
SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: lib $(NAME)
lib:
		@make -C $(LIBFT) all
		@echo "libft_success"

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(LIBFT)/libft.a -o $(NAME)
		@echo "push_swap_success"
clean:
		rm -f $(OBJS) $(OBJS_BONUS)
		@make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
