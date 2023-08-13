#include "Zombie.hpp"

int main()
{
    Zombie *obj;
    obj = zombieHorde(3, "boo");
    for (int i = 0; i < 3; i++)
        (obj[i]).announce();
    delete[3] obj;
}