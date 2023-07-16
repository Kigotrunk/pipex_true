# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kortolan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 12:03:07 by kortolan          #+#    #+#              #
#    Updated: 2023/05/19 20:52:43 by kortolan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pipex
SRCS		= pipex.c pipex2.c
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
all:		${NAME}
${NAME}:
			make -C libft
			${CC} ${CFLAGS} -o ${NAME} ${SRCS} -L libft -lft
clean:
			make clean -C libft
fclean:
			${RM} ${NAME}
			make fclean -C libft
re:			fclean	all
test:
			${RM} ${NAME}
			${CC} ${CFLAGS} -o ${NAME} ${SRCS} -L libft -lft
