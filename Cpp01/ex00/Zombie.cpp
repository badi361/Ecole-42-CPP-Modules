#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
    this->name = "DEFAULT";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Is Dead :(" << std::endl;
}