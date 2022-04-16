#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int main()
{

	std::cout << "\t### Animal ###"<<std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << ": ";
	j->makeSound();
    std::cout << i->getType() << ": ";
	i->makeSound();
    // will output the cat sound!
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;

    std::cout << "\n\t### WrongAnimal ###"<<std::endl;
    
    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* a = new WrongCat();

    std::cout <<  a->getType() << ": ";
	a->makeSound();
    beta->makeSound();
    
    delete beta;
    delete a;

	return 0;
}
