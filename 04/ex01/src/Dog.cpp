#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog & Dog::operator= (const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}