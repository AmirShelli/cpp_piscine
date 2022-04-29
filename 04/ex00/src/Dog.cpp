#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "a Dog was born!" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "no Dogs in my house!" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog is a copy... cat?" << std::endl;
	*this = other;
}

Dog & Dog::operator= (const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark!!!" << std::endl;
}