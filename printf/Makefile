# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 23:41:14 by jzorreta          #+#    #+#              #
#    Updated: 2025/11/12 14:28:42 by jzorreta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c utils.c utils_2.c
OBJS = ${SRC:.c=.o}
CC 	= cc
RM 	= rm -f
CFLAGS 	= -Wall -Wextra -Werror
INCLUDE = -I .

%.o: %.c
	@${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@ >/dev/null 2>&1

${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS} >/dev/null 2>&1
	@echo "printf has spawned!"

all: ${NAME}

clean:
	@${RM} ${OBJS}
	@echo "cleaning done!"

fclean: clean
	@${RM} ${NAME}
	@echo "all libraries removed!"

re: fclean all
	@echo "full rebuild complete!"

.PHONY: all clean fclean re