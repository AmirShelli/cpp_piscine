NAME = Violence

SRCS =  $(wildcard ./src/*.cpp)

OBJS = $(SRCS:.c=.o)

INCLUDES = -I $(wildcard ./inc/*.hpp)

CC = g++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(INCLUDES) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) $< -c -o $@

clean :
	@rm -rf $(wildcard ./*.gch.*)
	@rm -rf $(wildcard ./*/*.gch.*)
	@rm -rf $(wildcard ./*/*/*.gch.*)

fclean : clean
	@rm -rf $(NAME)

re : fclean all