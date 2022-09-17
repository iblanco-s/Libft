# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 17:41:17 by iblanco-          #+#    #+#              #
#    Updated: 2022/09/16 18:32:36 by iblanco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_strlcat.c ft_strdup.c ft_calloc.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_memset.c ft_strnstr.c ft_strncmp.c ft_toupper.c ft_tolower.c  ft_strlen.c ft_strlcpy.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_atoi.c 

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

