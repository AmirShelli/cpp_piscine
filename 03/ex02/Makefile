NAME = FragTrap

SRC = $(wildcard ./src/*.cpp)

INC = $(wildcard ./inc/*.hpp)

OBJ = $(SRC:.cpp=.o)

CC = c++

REM = rm -f

FLAG = -Wall -Wextra -Werror -std=c++98

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(REM) $(OBJ)

fclean: clean
	$(REM) $(NAME)

re: fclean all