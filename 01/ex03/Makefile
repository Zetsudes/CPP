# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/09 09:47:54 by zamohame          #+#    #+#              #
#    Updated: 2025/09/12 22:26:27 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        = attack  

CXX         = c++            
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98  

SRC         = HumanA.cpp \
			  HumanB.cpp \
			  Weapon.cpp \
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
