# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 15:26:55 by frmurcia          #+#    #+#              #
#    Updated: 2022/09/20 17:07:37 by frmurcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS
GREEN			:= \033[32m
NC				:= \033[m

NAME = libft.a

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c

INC = -I $(INC_DIR)

OBJ = $(SRC:.c=.o)

DEPS = $(SRC:.c=.d)

HEADER = libft.h

FLAGS = -Wall -Werror -Wextra -MMD

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

all : $(NAME)

-include $(DEPS)

$(NAME) : $(OBJ) $(HEADER)
	ar -crs $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)
	rm -f $(DEPS)

fclean : clean
	rm -f $(NAME)
	@echo "$(GREEN)$(NAME) cleaned!$(NC)"

re : fclean all

.PHONY : all clean fclean re
