#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		WrongAnimal& operator=(const WrongAnimal& cpy);

		void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif