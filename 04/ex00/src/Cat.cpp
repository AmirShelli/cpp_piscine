#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator= (const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Cat::makeSound()
{
	std::cout << "Meow!" << std::endl;
}