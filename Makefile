# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrochet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 14:23:35 by mrochet           #+#    #+#              #
#    Updated: 2021/05/25 14:43:52 by mrochet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS_NAME = init_pile_a.c lst.c \
			main.c	parsing.c \
			libft.a

RM		=	rm -f
CC		=	gcc
#FSAN	=	-g -fsanitize=address
#CFLAGS	=	-Wall -Werror -Wextra

${NAME}:
	@${CC} ${FSAN} ${SRCS_NAME} ${CFLAGS} -o ${NAME}
	@echo "Compilation Succes !"
	@./push_swap 10 6 7 9 2 3 4 1 5 8 0 
	
all: ${NAME}

clean:
	@${RM}  ${OBJS}
	@echo "Clean Succes !"

fclean:		clean
	@${RM} ${NAME}

re:		fclean all
