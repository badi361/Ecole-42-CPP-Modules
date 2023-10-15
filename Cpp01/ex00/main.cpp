#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie2;
    Zombie zombie1("Heap Zombie");
    zombie2 = newZombie("Baran");
    randomChump("Olcay");
    zombie2->announce();
    delete zombie2;
}