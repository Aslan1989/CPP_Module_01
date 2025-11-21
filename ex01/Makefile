# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aslan <aslan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 18:56:26 by aslan             #+#    #+#              #
#    Updated: 2025/11/05 19:08:46 by aslan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                   Makefile                                   #
# **************************************************************************** #

NAME = zombieHorde
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
