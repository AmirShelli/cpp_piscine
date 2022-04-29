#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(std::string name) : Animal()
{
    _type = name;
    _brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat & Cat::operator= (const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = other._type;
	Brain *b = new Brain();
	*b = *(other._brain);
	delete this->_brain;
	this->_brain = b;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

// std::string Cat::getBrainIdeas(const int i) const
// {
//     return (_brain->getIdeas(i));
// }