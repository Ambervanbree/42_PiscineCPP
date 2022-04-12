NAME	=	megaphone
CC		=	c++
RM		=	rm -rf
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re, all, clean, 