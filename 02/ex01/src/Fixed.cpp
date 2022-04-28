#include "../inc/Fixed.hpp"

Fixed &Fixed::operator =(const Fixed &other) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
        this->_raw = other._raw;
    return (*this);
}

std::ostream& operator <<(std::ostream& stream, const Fixed &obj)
{
	stream << obj.toFloat();
	return stream;
}

Fixed::Fixed() 
{ 
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_raw = other._raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void Fixed::setRawBits(int const value)
{
	this->_raw = value;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const int value) 
{ 
	std::cout << "Int constructor called" << std::endl;
	this->_raw = value << this->_frac_bit;
}

Fixed::Fixed(const float value) 
{ 
	std::cout << "Float constructor called" << std::endl;
	this->_raw = (int)(roundf(value * (1 << this->_frac_bit)));
}

float Fixed::toFloat() const
{
	return (float)this->_raw/ (float)(1 << this->_frac_bit);
}

int Fixed::toInt() const
{
	return (int)(this->_raw >> this->_frac_bit);
}