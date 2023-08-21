#include "Zombie.hpp"

// Zombie::Zombie()
// {
//     std::cout << "Constructor called" << std::endl;
// }
// Zombie::~Zombie()
// {
//     std::cout << "destractor called" << std::endl;
// }
void Zombie::announce()
{
    std::cout << "name :" << name << std::endl;
}
void Zombie::set(std::string n)
{
    name = n; 
}