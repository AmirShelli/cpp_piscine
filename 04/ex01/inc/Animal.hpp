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
	Animal(const Animal& obj);
	virtual ~Animal();
	Animal &operator=(const Animal &srcObject);
    
	// virtual std::string getBrainIdeas(const int i) const = 0;
    virtual void makeSound(void) const;
	std::string getType() const;
};

#endif