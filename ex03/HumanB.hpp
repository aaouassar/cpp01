#ifndef HUMANB_HPP
#define HUMANB_HPP


#include<iostream>
#include<string>
#include"Weapon.hpp"

class Weapon;
class HumanB
{
    private:
        std::string name;
        Weapon *_weapon;

    public:
        HumanB(std::string n);
        void setWeapon(Weapon *Weapon);
        void attacks();

};


#endif