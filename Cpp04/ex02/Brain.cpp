#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
    this->ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = "There is no idea";
    }
}

Brain::Brain(std::string *idea) {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
    {
		this->ideas[i] = idea[i];
    }
}

Brain::~Brain()
{
    delete [] this->ideas;
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain '=' operator called" << std::endl;
	delete [] this->ideas;
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

std::string* Brain::getIdeas(void)
{
	return (this->ideas);
}