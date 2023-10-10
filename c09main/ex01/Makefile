# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 15:31:20 by vdecleir          #+#    #+#              #
#    Updated: 2023/08/23 22:36:07 by vdecleir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc

NAME 		= libft.a

CFLAGS 		= -Wall -Wextra -Werror

SRCSDIR 	= srcs/ft_putchar.c \
			  srcs/ft_swap.c \
			  srcs/ft_putstr.c \
			  srcs/ft_strlen.c \
			  srcs/ft_strcmp.c

INCLUDESDIR	= -I./includes

MY_OBJECTS	= $(SRCSDIR:.c=.o)

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) $(INCLUDESDIR) -c $< -o $@

$(NAME):	$(MY_OBJECTS)
			ar -rcs $(NAME) $(MY_OBJECTS)

all:		$(NAME)


clean:
			$(RM) $(MY_OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
