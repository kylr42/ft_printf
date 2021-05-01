# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsiona <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/20 12:32:54 by jsiona            #+#    #+#              #
#    Updated: 2021/04/21 20:30:50 by jsiona           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iincludes
NAME=libftprintf.a

SRCS = ft_printf.c \
	   parsers/ft_parse.c \
	   parsers/ft_parse_width.c \
	   parsers/ft_parse_descriptor.c \
	   parsers/ft_parse_precision.c \
	   parsers/ft_parse_flag.c \
       sources/ft_node.c \
	   sources/ft_putchar_ln.c \
       sources/ft_putnbr_ln.c \
	   sources/ft_puthex_ln.c \
	   sources/ft_putpoint_ln.c \
       translators/ft_translators.c \
	   translators/ft_int_tr.c \
	   translators/ft_char_tr.c \
	   translators/ft_str_tr.c \
	   translators/ft_hex_tr.c \
	   translators/ft_point_tr.c \
	   translators/ft_un_tr.c \
	   translators/ft_perc_tr.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

DEPS = includes/ft_printf.h

all: ${NAME}

${NAME}: ${OBJS} ${DEPS}
	ar rsc ${NAME} ${OBJS}

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
