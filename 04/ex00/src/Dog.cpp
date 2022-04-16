#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(std::string type)
{
	std::cout << "Dog initialize constructor called" << std::endl;
	this->_type = type;
}

Dog & Dog::operator= (const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}