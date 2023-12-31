#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat& cpy);
		Cat& operator=(const Cat& cpy);

		void	makeSound(void) const;
};

#endif