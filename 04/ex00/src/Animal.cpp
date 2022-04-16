#include "../inc/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(std::string name):_type(name)
{
	std::cout << "Animal initialize constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal & Animal::operator= (const Animal &other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}