# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboia-pe <rboia-pe@student.42porto.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 01:54:21 by rboia-pe          #+#    #+#              #
#    Updated: 2023/04/08 01:54:21 by rboia-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME	= libft.a

SRCS	= $(wildcard srcs/*.c)
OBJS	= $(SRCS:.c=.o)


CFLAGS	= -Wall -Wextra -Werror -Iincludes/*.h

CC		= gcc

RM		= rm -fr


CL		= ar -rc
RL		= ar -s


$(NAME): $(OBJS)
		$(CL) $(NAME) $(SRCS)
		$(RL) $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

norm:
		norminette -R CheckForbiddenSourceHeader src/*.c
		norminette -R CheckDefine ./includes/*.h

.PHONY: clean fclean all re norm