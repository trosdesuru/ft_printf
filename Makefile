# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 16:38:57 by edhernan          #+#    #+#              #
#    Updated: 2024/02/23 18:15:46 by edhernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRCS		= ft_printf.c \
			  ft_prchar.c \
			  ft_prdigit.c \
			  ft_prhexalow.c \
			  ft_prhexaup.c \
			  ft_prptr.c \
			  ft_prstr.c \
			  ft_prui.c \

OBJS		= ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

%.o : %.c	ft_printf.h Makefile
			${CC} ${CFLAGS} -c $<

clean:
			@rm -f ${OBJS}

fclean:		clean
			@rm -f ${NAME}

re: 		fclean all

.PHONY:		all clean fclean  re
