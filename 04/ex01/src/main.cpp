#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int main()
{ // TODO: implement the tests!!!!
	std::cout << "\t### Animal ###"<<std::endl;

    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << ": ";
	// j->makeSound();
    // std::cout << i->getType() << ": ";
	// i->makeSound();
    // will output the cat sound!
    // meta->makeSound();
    
    // delete meta;
    // delete j;
    // delete i;

	Animal *m[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            m[i] = new Dog();
        else
            m[i] = new Cat();
    }
    for (int j = 0; j < 10; j++)
    {
        delete m[j];
    }
    

	return 0;
}
