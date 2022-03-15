NAME = Megaphone

SRCS =  $(wildcard ./*.cpp)

OBJS = $(SRCS:.c=.o)

INCLUDES =

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS)

clean :
	@rm -rf $(wildcard ./*.o)
	@rm -rf $(wildcard ./*/*.o)
	@rm -rf $(wildcard ./*/*/*.o)

fclean : clean
	@rm -rf $(NAME)

re : fclean all