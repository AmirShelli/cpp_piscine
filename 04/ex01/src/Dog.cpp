#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(std::string name) : Animal()
{
    _type = name;
    _brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog & Dog::operator= (const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = other._type;

	Brain *b = new Brain();
	*b = *(other._brain);
	delete this->_brain;
	this->_brain = b;
	return (*this);
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

// std::string Dog::getBrainIdeas(const int i) const
// {
//     return (_brain->getIdeas(i));
// }