# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aslan <aslan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/08 18:56:13 by aslan             #+#    #+#              #
#    Updated: 2025/11/08 19:00:25 by aslan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp FileReplacer.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
