NAME = Sed

GCC := c++ -Werror -Wextra -Wall  -std=c++98 

SRC := main.cpp sed.cpp

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all