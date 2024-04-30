# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npatron <npatron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 13:01:28 by npatron           #+#    #+#              #
#    Updated: 2024/03/28 15:25:40 by npatron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iPhone

SRC = main.cpp \
	  Contact.cpp \
	  PhoneBook.cpp \

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	g++ $(CXXFLAGS) -c $< -o $@
