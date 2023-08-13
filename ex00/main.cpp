#include "Zombie.hpp"

int main()
{
    Zombie *obj;
    obj = newZombie("walid");
    obj->announce();
    delete obj;
    // randomChump("walid");



}