#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Unknown";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
	std::cout << "WrongCat type constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy)
{
	*this = cpy;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cpy)
{
	std::cout << "WrongCat '=' operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "It's just WrongCat" << std::endl;
}
