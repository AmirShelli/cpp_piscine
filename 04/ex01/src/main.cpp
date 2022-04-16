#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int main()
{ // TODO: implement the tests!!!!
	std::cout << "\t### Animal ###"<<std::endl;

    // const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << ": ";
	j->makeSound();
    std::cout << i->getType() << ": ";
	i->makeSound();
    // will output the cat sound!
    // meta->makeSound();
    
    // delete meta;
    delete j;
    delete i;

	return 0;
}
