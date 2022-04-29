#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Brain* _brain;
public:
	Dog();
	~Dog();
	Dog(const Dog& obj);
	Dog& operator= (const Dog &obj);
	Dog(std::string name);

	void makeSound() const;
	std::string getBrainIdeas(const int i) const;
};

#endif