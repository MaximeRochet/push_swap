# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrochet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 14:23:35 by mrochet           #+#    #+#              #
#    Updated: 2021/05/28 14:11:09 by mrochet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS_NAME = init_pile_a.c lst.c \
			main.c	parsing.c \
			deplacement.c sort_un.c libft.a\

RM		=	rm -f
CC		=	gcc
FSAN	=	-g -fsanitize=address
#CFLAGS	=	-Wall -Werror -Wextra

${NAME}:
	@${CC} ${FSAN} ${SRCS_NAME} ${CFLAGS} -o ${NAME}
	@echo "Compilation Succes !"
	@./push_swap 74 66 6625 6 68 8623  3 1  4 8797  456 9 8 87 879 
	
all: ${NAME}

clean:
	@${RM}  ${OBJS}
	@echo "Clean Succes !"

fclean:		clean
	@${RM} ${NAME}

re:		fclean all
