#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    this->type = type;
	std::cout << "Cat type constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat '=' operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}