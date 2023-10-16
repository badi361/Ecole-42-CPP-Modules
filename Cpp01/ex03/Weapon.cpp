#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void)
{
	this->type = "Default Gun";
}

Weapon::Weapon(std::string gun)
{
	this->type = gun;
}