#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
	std::cout << "Dog type constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog '=' operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Hav" << std::endl;
}