#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Noname";
	this->attack_damage = 0;
	this->energy_points = 10;
	this->hit_points = 10;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->attack_damage = 0;
	this->energy_points = 10;
	this->hit_points = 10;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cpy)
{
	this->attack_damage = cpy.attack_damage;
	this->name = cpy.name;
	this->energy_points = cpy.energy_points;
	this->hit_points = cpy.hit_points;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points >= 1 && this->hit_points >= 1)
	{
		this->energy_points -= 1;
		std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
	else
	{
		if (this->energy_points < 1)
			std::cout << "ClapTrap " + this->name + " does not have enough energy points!"<<std::endl;
		else
			std::cout << "ClapTrap " + this->name + " is dead!"<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points >= 1)
	{
		if (amount < this->hit_points)
		{
			this->hit_points -= amount;
			std::cout << "ClapTrap " + this->name + " is took " << amount << " damage!"<< std::endl;
		}
		else
		{
			this->hit_points = 0;
			std::cout << "ClapTrap " + this->name + " is dead!" << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " + this->name + " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points >= 1)
	{
		this->hit_points += amount;
		this->energy_points -= 1;
        std::cout << "ClapTrap " + this->name + " takes " << amount << " points of repair point" << std::endl;
	}
	else
		std::cout << "ClapTrap " + this->name + "'s energy points is not enough for repair" << std::endl;
}
