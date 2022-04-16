#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator= (const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}