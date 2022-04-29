#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int main()
{
	// doesn't compile because Animal is an abstract class!
	// Animal *a = new Animal();
	// Animal b;

	// compiles with a new method!
	const Animal *dog1 = new Dog("dog1");
    const Animal *dog2 = new Dog("dog2");
    const Animal *dog3 = new Dog("dog3");
    const Animal *dog4 = new Dog("dog4");
    const Animal *dog5 = new Dog("dog5");
    const Animal *cat1 = new Cat("cat1");
    const Animal *cat2 = new Cat("cat2");
    const Animal *cat3 = new Cat("cat3");
    const Animal *cat4 = new Cat("cat4");
    const Animal *cat5 = new Cat("cat5");

    const Animal *arr[] = {dog1, dog2, dog3, dog4, dog5, cat1, cat2, cat3, cat4, cat5};

    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i]->getBrainIdeas(i) << std::endl;
        arr[i]->makeSound();
        delete arr[i];
    }
	return 0;
}
