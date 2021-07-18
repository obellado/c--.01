# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obellado <obellado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 18:00:15 by obellado          #+#    #+#              #
#    Updated: 2021/07/18 16:09:10 by obellado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	go

CC		=	clang++ -Wall -Werror -Wextra

SRCS	=	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp


OBJS			= $(SRCS:.cpp=.o)

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o ${NAME} ${OBJS}

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
