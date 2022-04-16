#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	~Dog();
	// Dog(const Animal& obj);
	Dog& operator= (const Dog &obj);
};

#endif