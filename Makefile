# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 01:13:28 by bshintak          #+#    #+#              #
#    Updated: 2022/02/18 16:33:51 by bshintak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -g
CC = gcc
RM = rm -f

NAME = push_swap

$(VERBOSE).SILENT:

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

LIBPS = ./libps/libps.a
LIBPS_PATH = ./libps

INC = -I ./libft -I ./Includes -I ./ft_printf

SRC_PATH = .

OBJ_PATH = ./objects

SRC_NAME =	main.c

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJS = $(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRC))

all: $(NAME)

$(NAME) : $(OBJS)
	make -C $(LIBFT_PATH)
	make -C $(FT_PRINTF_PATH)
	make -C $(LIBPS_PATH)
	$(CC) $(CFLAGS) $(LIBFT) $(LIBPS) $(FT_PRINTF) $(OBJS) -o $(NAME)
	echo "\x1b[36m[PUSH_SWAP COMPILED]\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	mkdir -p objects
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	make clean -C $(LIBFT_PATH)
	make clean -C $(FT_PRINTF_PATH)
	make clean -C $(LIBPS_PATH)
	rm -rf $(OBJ_PATH)
	echo "\033[33mall $(NAME).o files are removed\033[0m"

fclean: clean
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(FT_PRINTF_PATH)
	make fclean -C $(LIBPS_PATH)
	rm -f $(NAME)
	echo "\033[31m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
