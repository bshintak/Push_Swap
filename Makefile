# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 15:35:27 by bshintak          #+#    #+#              #
#    Updated: 2022/03/07 10:43:28 by bshintak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(VERBOSE).SILENT:

# NAME

NAME		= push_swap

# VAR

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
MKD			= mkdir
RM			= rm -f

# FILES

SRC_NAME	=	checker_rules.c		\
				number_of_args.c	\
				sort_args.c			\
				push_swap.c			\
				move_swap.c			\
				move_rotate.c		\
				move_rev_rotate.c	\
				move_push.c			\
				utils.c				\
				main.c

SRCS		= $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJS		= $(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRCS))
DEPS		= ./libft/libft.a ./ft_printf/libftprintf.a

# PATHS

SRC_PATH = ./libps
OBJ_PATH = ./objects

# RULES

all: $(NAME)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(DEPS) $(OBJ_PATH) $(OBJS)
	$(CC) $(CFLAGS) $(DEPS) $(OBJS) -o $(NAME)
	echo "\x1b[36m[PUSH_SWAP COMPILED]\x1b[0m"	

# Libraries

LIBFT_PATH	= ./libft
./libft/libft.a: $(shell make -C $(LIBFT_PATH) -q libft.a || echo force)
	make -C $(LIBFT_PATH)
	
LIBPF_PATH	= ./ft_printf
./ft_printf/libftprintf.a: $(shell make -C $(LIBPF_PATH) -q libftprintf.a || echo force)
	make -C $(LIBPF_PATH)

# DIR

$(OBJ_PATH):
	$(MKD) -p objects

# Clean

clean:
	make clean -C $(LIBFT_PATH)
	make clean -C $(LIBPF_PATH)
	$(RM) -r $(OBJ_PATH)
	echo "\033[33mall $(NAME).o files are removed\033[0m"

fclean: clean
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(LIBPF_PATH)
	$(RM) $(NAME)
	echo "\033[31m$(NAME) is deleted\033[0m"

re:	fclean all

.PHONY: all clean fclean re force
