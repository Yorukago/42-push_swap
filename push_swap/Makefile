# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jzorreta <jzorreta@.42lisboa.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/11 22:05:32 by jzorreta          #+#    #+#              #
#    Updated: 2026/01/11 22:39:00 by jzorreta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

PINK       = \033[1;35m
RESET       = \033[0m

define ASCII_ART
                                                                                                    
                                   ,dPYb,                                                           
                                   IP'`Yb                                                           
                                   I8  8I                                                           
                                   I8  8'                                                           
 gg,gggg,    gg      gg    ,g,     I8 dPgg,         ,g,     gg    gg    gg     ,gggg,gg  gg,gggg,   
 I8P"  "Yb   I8      8I   ,8'8,    I8dP" "8I       ,8'8,    I8    I8    88bg  dP"  "Y8I  I8P"  "Yb  
 I8'    ,8i  I8,    ,8I  ,8'  Yb   I8P    I8      ,8'  Yb   I8    I8    8I   i8'    ,8I  I8'    ,8i 
,I8 _  ,d8' ,d8b,  ,d8b,,8'_   8) ,d8     I8,    ,8'_   8) ,d8,  ,d8,  ,8I  ,d8,   ,d8b,,I8 _  ,d8' 
PI8 YY88888P8P'"Y88P"`Y8P' "YY8P8P88P     `Y8    P' "YY8P8PP""Y88P""Y88P"   P"Y8888P"`Y8PI8 YY88888P
 I8                                                                                      I8         
 I8                                                                                      I8         
 I8                                                                                      I8         
 I8                                                                                      I8         
 I8                                                                                      I8         
 I8                                                                                      I8         
endef
export ASCII_ART

CC          = cc
CFLAGS      = -Wall -Wextra -Werror
INC         = -I includes/

SRC_DIR     = sources/
OBJ_DIR     = obj/

SRC_FILES   = ft_push.c ft_reverse_rotate.c ft_rotate.c ft_stack.c ft_swap.c push_swap.c main.c
SRCS        = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS        = $(SRC_FILES:%.c=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INC) -o $(NAME)
	@printf "$(PINK)$$ASCII_ART$(RESET)\n"
	@printf "$(PINK)            			   push_swap has appeared! $(RESET)\n"

# Compiling objects quietly
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Objects vanished!"

fclean: clean
	@rm -f $(NAME)
	@echo "Executables destroyed!"

re: fclean all

.PHONY: all clean fclean re