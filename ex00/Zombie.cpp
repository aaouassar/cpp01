#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Constructor called" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Destructor called" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << "name :" << name << std::endl;
}

