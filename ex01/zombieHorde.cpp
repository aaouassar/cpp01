#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *obj;
    obj = new Zombie[N];
    for(int i = 0;i < N;i++)
        obj[i].set(name);
    return(obj);
}