#include "Dog.hpp"
#include "Cat.hpp"
#include  "WrongAnimal.hpp"

int main() {
    AAnimal *animalcat = new Cat();
    std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
    AAnimal *animaldog = new Dog();
    std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
    delete animalcat;
    std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
    delete animaldog;
    std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "DEEP COPY CONTROL" << std::endl;
    Dog dog;
    Dog dog2 = dog;
    std::cout << dog.getBrain() << std::endl;
    std::cout << dog2.getBrain() << std::endl;
    std::cout << "Brain gonna copy" << std::endl;
    Brain a;
    Brain b(a);
    a = b;
    a.setIdea("BARAN");
    b.setIdea("OLCAY");
    for(int i = 0; i < 100; i++)
        std::cout << (a.getIdeas()[i]) << std::endl;
    std::cout << (b.getIdeas()[21]) << std::endl;
}