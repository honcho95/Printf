# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 11:36:49 by emaugale          #+#    #+#              #
#    Updated: 2022/02/28 13:09:51 by tbaskhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c				\
		ft_print_c.c				\
		ft_print_d.c				\
		ft_print_p.c				\
		ft_print_percent.c			\
		ft_print_s.c				\
		ft_print_u.c				\
		ft_print_x.c				\
		ft_print_i.c				\
		ft_print_upx.c			\
		ft_utils.c			\

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = ${SRCS:.c=.o}


NAME = libftprintf.a

all : ${NAME}

$(NAME) : ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all, clean, fclean, re
