#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(std::string type)
{
    this->type = type;
	this->brain = new Brain();
	std::cout << "Dog type constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = cpy;
}

Dog& Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog '=' operator called" << std::endl;
	this->type = cpy.type;
	(this->brain) = new Brain(*(cpy.brain));
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Hav" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}