NAME = StringTest

SRCS =  $(wildcard ./*.cpp)

OBJS = $(SRCS:.c=.o)

INCLUDES = -I $(wildcard ./*.hpp)

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) -I $(INCLUDES) -o $(NAME) $(OBJS)

clean :
	@rm -rf $(wildcard ./*.o)
	@rm -rf $(wildcard ./*/*.o)
	@rm -rf $(wildcard ./*/*/*.o)

fclean : clean
	@rm -rf $(NAME)

re : fclean all