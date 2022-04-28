NAME = Identify

SRCS =  $(wildcard ./src/*.cpp)

OBJS = $(SRCS:.c=.o)

INCLUDES = -I ./inc

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(INCLUDES) $(OBJS) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $< -c -o $@

clean :
	@rm -rf $(wildcard ./*.gch.*)
	@rm -rf $(wildcard ./*/*.gch.*)
	@rm -rf $(wildcard ./*/*/*.gch.*)

fclean : clean
	@rm -rf $(NAME)

re : fclean all