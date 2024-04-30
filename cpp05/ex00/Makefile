# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npatron <npatron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 16:25:39 by npatron           #+#    #+#              #
#    Updated: 2024/04/12 16:44:29 by npatron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Bureaucrat

SRC =	main.cpp \
		Bureaucrat.cpp \

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