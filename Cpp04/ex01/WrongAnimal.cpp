#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Unknown";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
	std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	*this = cpy;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cpy)
{
	std::cout << "WrongAnimal '=' operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "It's just WrongAnimal" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}
