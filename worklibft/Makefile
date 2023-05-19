# **************************************************************************** #
#                                                                            #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 20:08:02 by sansegur          #+#    #+#              #
#    Updated: 2023/02/20 16:43:32 by sansegur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	ft_isalpha.c \
		ft_isdigit.c \
	   	ft_isalnum.c \
		ft_isascii.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_memchr.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_calloc.c \
		ft_substr.c \
		ft_atoi.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c	
OBJS	=	$(SRCS:.c=.o)
INCDIR	=	-I ./
RM	=	rm -f
CC	=	gcc
AR	=	ar rcs
HEADER	=	libft.h

%.o: %.c $(HEADER)
	${CC} ${CFLAGS} -I $(HEADER) $(INCDIR) -c $< -o $@

#ft_isalpha.o: ft_isalpha.c libft.h
#	gcc -Wall -Ilibft.h -c ($< == ft_isalpha.c) -o ($@ == ft_isalpha.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
