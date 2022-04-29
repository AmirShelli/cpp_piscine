#include "../inc/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal was created by default" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal died" << std::endl;
}

Animal::Animal(std::string name):_type(name)
{
	std::cout << "Animal's string constructor'" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copied someone" << std::endl;
	*this = other;
}

Animal & Animal::operator= (const Animal &other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Animal::makeSound() const
{
    std::cout << "grrr" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}