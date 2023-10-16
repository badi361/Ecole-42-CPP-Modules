#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    zombies = zombieHorde(7, "Baran");
    delete[] zombies;
    return (0);
}