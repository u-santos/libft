# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/01 08:16:09 by usantos-          #+#    #+#              #
#    Updated: 2021/06/07 13:29:32 by usantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
		
NAME	=	libft.a
SRCS	=	ft_atoi.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strnstr.c \
			ft_strlen.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_strmapi.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
RM = rm -rf
LIBA = ar -rc
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	${OBJS}
	${LIBA} $(NAME) $(OBJS)
	ranlib $(NAME)
%.o:	%.c
	$(CC) -c $(CFLAGS) $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean
