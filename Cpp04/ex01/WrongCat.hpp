#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		~WrongCat();
		WrongCat(const WrongCat& cpy);
		WrongCat& operator=(const WrongCat& cpy);

		void	makeSound(void) const;
};

#endif