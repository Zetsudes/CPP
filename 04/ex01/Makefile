# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 15:02:43 by zamohame          #+#    #+#              #
#    Updated: 2026/01/26 15:02:44 by zamohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = brain  

CXX         = c++            
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98  

SRC         = Animal.cpp \
			  Cat.cpp \
			  Dog.cpp \
			  Brain.cpp \
			  main.cpp \


OBJ         = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re