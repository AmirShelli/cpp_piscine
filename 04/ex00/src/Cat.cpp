#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat got created!" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat left the chat :(" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat is a copy Cat!" << std::endl;
	*this = other;
}

Cat & Cat::operator= (const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!!!" << std::endl;
}