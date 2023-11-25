#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "Noname";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	this->attack_damage = cpy.attack_damage;
	this->name = cpy.name;
	this->energy_points = cpy.energy_points;
	this->hit_points = cpy.hit_points;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
	*this = cpy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy_points >= 1 && this->hit_points >= 1)
	{
		this->energy_points -= 1;
		std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
	else
	{
		if (this->energy_points < 1)
			std::cout << "ScavTrap " + this->name + " does not have enough energy points!"<<std::endl;
		else
			std::cout << "ScavTrap " + this->name + " is dead!"<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
