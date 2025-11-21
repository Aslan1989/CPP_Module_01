# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aslan <aslan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 09:57:40 by aslan             #+#    #+#              #
#    Updated: 2025/11/06 09:59:39 by aslan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex03

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
RM := rm -f

SRC := main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
