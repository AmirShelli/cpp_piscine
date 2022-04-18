#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name):_type(name)
{
	std::cout << "WrongAnimal initialize constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "the Wrong Animal makes sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}