# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npatron <npatron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 14:33:48 by npatron           #+#    #+#              #
#    Updated: 2024/05/07 18:58:51 by npatron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	PmergeMe

SRC =	main.cpp \
		PmergeMe.cpp \

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98  ##-fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	c++ $(CXXFLAGS) -c $< -o $@