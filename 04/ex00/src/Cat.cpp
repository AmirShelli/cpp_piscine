#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(std::string type)
{
	std::cout << "Cat initialize constructor called" << std::endl;
	this->_type = type;
}

Cat & Cat::operator= (const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}