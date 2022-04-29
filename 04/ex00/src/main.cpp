#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "\n\t### some tests ###"<<std::endl;
		std::cout << "\t[standard]" << std::endl;

		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << ": "; j->makeSound();
		std::cout << i->getType() << ": "; i->makeSound();
		
		std::cout << "class Animal: "; meta->makeSound();

		delete meta;
		delete j;
		delete i;

		std::cout << "\n\t[wrong]" << std::endl;
		
		const WrongAnimal* beta = new WrongAnimal();
		const WrongAnimal* a = new WrongCat();

		std::cout <<  a->getType() << ": "; a->makeSound();
		std::cout << "class Animal: "; beta->makeSound();
		
		delete beta;
		delete a;
	}
	{
		std::cout << "\n\t### some other tests ###"<<std::endl;

		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		const WrongAnimal *wrongMeta = new WrongAnimal();
		const WrongAnimal *wrongCat = new WrongCat();

		// standard
		std::cout << "\n\t[standard]" << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		// wrong
		std::cout << "\n\t[wrong]" << std::endl;
		std::cout << wrongCat->getType() << " " << std::endl;

		// standard
		std::cout << "\n\t[standard]" << std::endl;
		dog->makeSound(); // will output the cat sound!
		cat->makeSound();
		meta->makeSound();
		// wrong
		std::cout << "\n\t[wrong]" << std::endl;
		wrongCat->makeSound();
		wrongMeta->makeSound();

		delete meta;
		delete dog;
		delete cat;
		delete wrongMeta;
		delete wrongCat;
		return (0);
	}
	return 0;

}
