#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(std::string type)
{
    this->type = type;
	this->brain = new Brain();
	std::cout << "Cat type constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
	this->brain = new Brain();
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat '=' operator called" << std::endl;
	this->type = cpy.type;
	*(this->brain) = *(cpy.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}
