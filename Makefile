# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 15:26:55 by frmurcia          #+#    #+#              #
#    Updated: 2022/10/11 17:19:48 by frmurcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS
GREEN			:= \033[32m
NC				:= \033[m

NAME = libft.a

CC = gcc
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

FLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
HEADER = libft.h

RM = rm -Rf ..swp -o .ft_ -o

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@


$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

all : $(NAME)

bonus : $(OBJ) $(OBJ_BONUS) $(HEADER)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch $@

clean :
	$(RM) $(OBJ) $(OBJ_BONUS)
	
fclean : clean
	$(RM) $(NAME)
	@echo "$(GREEN)$(NAME) cleaned!$(NC)"

re : fclean all

.PHONY = all clean fclean re bonus
