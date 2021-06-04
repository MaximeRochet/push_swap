# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrochet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/04 15:11:20 by mrochet           #+#    #+#              #
#    Updated: 2021/06/04 15:11:25 by mrochet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = deplacement.c deplacement_sec.c init_pile_a.c\
	   lst.c lst_sec.c main.c parsing.c small_sort.c\
	   sort_deux.c sort_un.c 

OBJS = ${SRCS:.c=.o}
HEADER = push_swap.h
RM = rm -f
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB_FT = libft/libft.a

%.o: %.c push_swap.h./
			@$(CC) ${CFLAGS}  -Imlx -c $< -o $@ -fsanitize=address -g3

all : $(NAME)
$(NAME): ${OBJS} librairies
			@$(CC) ${CFLAGS} ${OBJS} libft/*.o -o ${NAME} -fsanitize=address -g3
			@echo “Compilation effectuée”
librairies:
			@make -C libft
clean:
			@${RM}  ${OBJS}
			@make clean -C libft

fclean:     clean
			@${RM} ${NAME}
			@make clean -C libft
			@echo “Tout a été supprimé”

re:         fclean all
