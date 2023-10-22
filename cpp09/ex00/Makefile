# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 22:38:37 by ldatilio          #+#    #+#              #
#    Updated: 2023/10/21 23:22:40 by ldatilio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc

INCLUDE	=	-I ./includes

MKDIR_P	=	mkdir -p
CC		=	c++ -Wall -Wextra -Werror -O3 -std=c++98 
CC      +=	-pedantic-errors -Wshadow -Wno-shadow

FILES	=	main.cpp BitcoinExchange.cpp

SRC_DIR	=	sources/
OBJ_DIR	=	build/

SRC		=	$(addprefix $(SRC_DIR), $(FILES))
OBJ		=	$(addprefix $(OBJ_DIR), $(FILES:%.cpp=%.o))

ITALIC_LIGHTER_YELLOW	= "\e[1;3;33m"
ITALIC_BOLD_GREEN		= "\e[0;3;92m"
RESET_COLOR				= "\e[0m"

ifndef ECHO
	T := $(shell $(MAKE) $(MAKECMDGOALS) -n ECHO="counter" | grep -c "counter")
endif

ifeq ($(firstword $(MAKECMDGOALS)), $(shell echo re))
	T := $(shell expr $(words $(FILES)) + 1)
endif

N := x
C = $(words $(N))$(eval N := x $(N))
P = "`expr $(C) '*' 100 / $(T)`"
ECHO = echo $(ITALIC_BOLD_GREEN)"[$(P)%]\t"

all:		$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJ)
	@$(CC) $(OBJ) $(INCLUDE) -o $(NAME)
	@$(ECHO) $(NAME) created! $(RESET_COLOR)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
	@$(ECHO) Compiling $< $(RESET_COLOR)
	@$(CC) $(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	@$(MKDIR_P) $(OBJ_DIR)

clean:
	@rm -fr $(OBJ_DIR) *_shrubbery
	@echo $(ITALIC_LIGHTER_YELLOW)"Objects deleted"$(RESET_COLOR)

fclean:		clean
	@rm -fr $(NAME)
	@echo $(ITALIC_LIGHTER_YELLOW)$(NAME)" deleted"$(RESET_COLOR)
	@rm -fr cpp_09.tgz data.csv input.txt

re:			fclean all

val:		all
	valgrind ./$(NAME)

test: all data.csv input.txt
	./$(NAME) input.txt

data.csv:
	curl https://cdn.intra.42.fr/document/document/18717/cpp_09.tgz > cpp_09.tgz
	tar -xvf cpp_09.tgz --strip-components=1 cpp_09/data.csv

input.txt:
	echo "date | value" > input.txt
	echo "2011-01-03 | 3" >> input.txt
	echo "2011-01-03 | 2" >> input.txt
	echo "2011-01-03 | 1" >> input.txt
	echo "2011-01-03 | 1.2" >> input.txt
	echo "2011-01-09 | 1" >> input.txt
	echo "2012-01-11 | -1" >> input.txt
	echo "2001-42-42" >> input.txt
	echo "2012-01-11 | 1" >> input.txt
	echo "2012-01-11 | 2147483648" >> input.txt
	
.PHONY: all, clean, fclean, re, val, test
