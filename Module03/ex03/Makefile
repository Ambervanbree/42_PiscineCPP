# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 10:31:51 by avan-bre          #+#    #+#              #
#    Updated: 2022/05/10 12:01:18 by avan-bre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	diamondtrap
CC		=	c++
RM		=	rm -rf
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
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