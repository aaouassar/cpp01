NAME = Weapon

GCC := clang++ -Werror -Wextra -Wall  -std=c++98 

SRC := Weapon.cpp main.cpp HumanA.cpp HumanB.cpp

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all