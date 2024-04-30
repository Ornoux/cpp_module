# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npatron <npatron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 15:29:27 by npatron           #+#    #+#              #
#    Updated: 2024/04/09 20:35:49 by npatron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	AMateria

SRC =	main.cpp \
		AMateria.cpp \
		IceCure.cpp \
		MateriaSource.cpp \
		Character.cpp \

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

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