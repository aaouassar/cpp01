#include "Weapon.hpp"

HumanB::HumanB(std::string n)
{
    _weapon = NULL;
    name = n;
}

void HumanB::setWeapon(Weapon *Weapon)
{
    _weapon = Weapon;
}

void HumanB::attacks()
{
    if (_weapon != NULL)
        std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << "he doesn't have a weapon" << std::endl;
}