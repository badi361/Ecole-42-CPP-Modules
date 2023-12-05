#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : virtual public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& cpy);
		Brain*	getBrain() const;
		void	makeSound(void) const;
};

#endif