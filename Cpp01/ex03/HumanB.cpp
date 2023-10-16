#include "HumanB.hpp"

void	HumanB::attack(void)
{
    if (this->weapon == NULL)
        std::cout << this->name << " attacks with hand " << std::endl;
    else
	    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}