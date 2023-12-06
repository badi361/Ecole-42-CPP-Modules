#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		AAnimal(const AAnimal& cpy);
		AAnimal& operator=(const AAnimal& cpy);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif