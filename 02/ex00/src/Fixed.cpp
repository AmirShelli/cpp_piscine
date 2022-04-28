#include "../inc/Fixed.hpp" 
#include <iostream>

Fixed &Fixed::operator =(const Fixed &other) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed() 
{ 
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const value)
{
	this->_value = value;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}