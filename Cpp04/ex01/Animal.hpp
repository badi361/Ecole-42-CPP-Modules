#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& cpy);
		Animal& operator=(const Animal& cpy);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif