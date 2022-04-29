#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal got destroyed, ouch." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name):_type(name)
{
	std::cout << "WrongAnimal got a type now." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy copy copy" << std::endl;
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
    std::cout << "the Wrong Animal makes sound: bzz" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}