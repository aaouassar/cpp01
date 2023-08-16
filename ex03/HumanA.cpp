#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
    _name = name;
}

void HumanA::attacks()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}