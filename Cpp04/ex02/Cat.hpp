#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat& cpy);
		Cat& operator=(const Cat& cpy);

		Brain* getBrain() const;
		void	makeSound(void) const;
};

#endif