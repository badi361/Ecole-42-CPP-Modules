#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    zombie = newZombie("Baran");
    randomChump("Olcay");
    zombie->announce();
    delete zombie;
    return (0);
}