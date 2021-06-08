# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrochet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 14:23:35 by mrochet           #+#    #+#              #
#    Updated: 2021/06/07 15:27:50 by mrochet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS_NAME = init_pile_a.c lst.c \
			main.c	parsing.c \
			deplacement.c sort_un.c sort_deux.c libft.a\
			small_sort.c lst_sec.c deplacement_sec.c
 
RM		=	rm -f
CC		=	gcc
#FSAN	=	-g -fsanitize=address
#CFLAGS	=	-Wall -Werror -Wextra

${NAME}:
	@${CC} ${FSAN} ${SRCS_NAME} ${CFLAGS} -o ${NAME}
	@echo "Compilation Succes !"
	
all: ${NAME}

clean:
	@${RM}  *.o
	@echo "Clean Succes !"

fclean:		clean
	@${RM} ${NAME}

re:		fclean all
