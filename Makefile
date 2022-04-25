# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 13:51:37 by yjoo              #+#    #+#              #
#    Updated: 2022/04/25 17:41:46 by yjoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
FSANI = -g3 -fsanitize=address
LIBFT = libft
AR = ar rcs
NAME = push_swap
SRCS = main.c \
		node_util.c \
		stack_util.c \
		util.c
OBJS = $(SRCS:.c=.o)

all: lib $(NAME)
lib:
		@make -C $(LIBFT) all
		@echo "libft_success"

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(FSANI) $(OBJS) $(LIBFT)/libft.a -o $(NAME)
		@echo "push_swap_success"
clean:
		rm -f $(OBJS) $(OBJS_BONUS)
		@make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
