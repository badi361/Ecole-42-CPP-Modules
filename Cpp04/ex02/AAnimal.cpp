#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "Unknown";
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    this->type = type;
	std::cout << "AAnimal type constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& cpy)
{
	*this = cpy;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& cpy)
{
	std::cout << "AAnimal '=' operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "It's just AAnimal" << std::endl;
}

std::string		AAnimal::getType(void) const
{
	return (this->type);
}
