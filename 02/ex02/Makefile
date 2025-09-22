# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/16 10:06:59 by zamohame          #+#    #+#              #
#    Updated: 2025/09/16 10:07:12 by zamohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = class3

CXX         = c++            
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98  

SRC         = Fixed.cpp \
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
