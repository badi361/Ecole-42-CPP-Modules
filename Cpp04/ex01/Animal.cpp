#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Unknown";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	*this = cpy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& cpy)
{
	std::cout << "Animal '=' operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "It's just animal" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}
