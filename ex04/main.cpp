#include"sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "invalid number of argument" << std::endl;
        return (1);
    }
    std::string MyReadfile = av[1];
    ft_sed(MyReadfile, av[2], av[3]);
}