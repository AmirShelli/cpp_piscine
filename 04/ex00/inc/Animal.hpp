#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	~Animal();
	Animal(const Animal& obj);
	Animal& operator= (const Animal &obj);
};

#endif