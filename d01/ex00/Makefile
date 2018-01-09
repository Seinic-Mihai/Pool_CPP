# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseinic <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 13:27:27 by mseinic           #+#    #+#              #
#    Updated: 2018/01/09 15:39:08 by mseinic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++

FLAGS = -Wall -Werror -Wextra

NAME = pony

SRC = main.cpp 	Pony.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(COMPILER) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
