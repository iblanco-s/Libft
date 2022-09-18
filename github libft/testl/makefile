# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inigo <inigo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 17:41:17 by iblanco-          #+#    #+#              #
#    Updated: 2022/09/18 11:35:24 by inigo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_strjoin.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean:	clean
	$(RM) $(NAME)
	
re:	fclean $(NAME)

.PHONY:	all clean fclean re 

