#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& cpy);

		void	makeSound(void) const;
};

#endif