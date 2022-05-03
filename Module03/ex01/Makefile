# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 10:31:51 by avan-bre          #+#    #+#              #
#    Updated: 2022/04/13 18:24:29 by avan-bre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	claptrap
CC		=	c++
RM		=	rm -rf
SRCS	=	main.cpp ClapTrap.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCL	=	.

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@ -I$(INCL)

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o) -I$(INCL)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re, all, clean, 