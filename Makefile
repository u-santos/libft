# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/01 08:16:09 by usantos-          #+#    #+#              #
#    Updated: 2021/06/05 01:57:18 by usantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
		
NAME	=	libft.a
SRCS	=	ft_atoi.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_tolower.c
OBJS = $(SRCS:.c=.o)
RM = rm -rf
LIBA = ar -rc
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME): ${OBJS}
	${LIBA} $(NAME) $(OBJS)
	ranlib $(NAME)
%.o:	%.c
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) -f $(OBJS)

.PHONY: all clean
