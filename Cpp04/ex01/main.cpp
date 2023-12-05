#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    
    const Animal *animals[4] = {new Cat(), new Dog(), new Cat(), new Dog()};
    Cat cat(*(Cat *)animals[0]);
    cat.getBrain()->getIdeas();
    for(int i = 1;i< 4;i++)
    {
        animals[i]->makeSound();
        delete animals[i];
    }
    return 0;
}