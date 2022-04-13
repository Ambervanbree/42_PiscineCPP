# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 10:31:05 by avan-bre          #+#    #+#              #
#    Updated: 2022/04/13 10:31:06 by avan-bre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	more_zombies
CC		=	c++
RM		=	rm -rf
SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp
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