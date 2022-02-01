# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaskhan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 12:15:52 by tbaskhan          #+#    #+#              #
#    Updated: 2022/01/19 16:12:58 by tbaskhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_printf.c srcs/ft_print_c.c \
		srcs/ft_print_s.c srcs/ft_print_p.c \
		srcs/ft_print_d.c srcs/ft_print_i.c \
		srcs/ft_print_u.c srcs/ft_print_x.c \
		srcs/ft_print_upx.c srcs/ft_print_percent.c \
		srcs/ft_utils.c \
OBJS	= ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} $(OBJS)

fclean:		clean
	${RM} $(NAME)

re:		fclean all

bonus : ${BONUS_OBJS}
	ar rcs ${NAME}

.PHONY: all, clean, fclean, re
