NAME = clap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re : fclean $(NAME)
