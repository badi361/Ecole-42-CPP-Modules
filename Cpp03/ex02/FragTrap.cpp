#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "Noname";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap name constructor called" << std::endl;   
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy)
{
	*this = cpy;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	this->attack_damage = cpy.attack_damage;
	this->name = cpy.name;
	this->energy_points = cpy.energy_points;
	this->hit_points = cpy.hit_points;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " high fives guys!" << std::endl;
}
