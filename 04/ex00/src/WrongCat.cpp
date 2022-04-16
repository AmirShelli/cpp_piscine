#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator= (const WrongCat &other)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow BArK!" << std::endl;
}