#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	Cat k(*(Cat *)i);
	std::string *ideas = k.getBrain()->getIdeas();
	for(int p = 0;p < 100; p++)
	{
	 	std::cout << ideas[p] << std::endl;
	}
	k.makeSound();
	j->makeSound();
	delete j;
	delete i;
	return (0);
}