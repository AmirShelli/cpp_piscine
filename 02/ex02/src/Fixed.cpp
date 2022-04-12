#include "../inc/Fixed.hpp"

Fixed Fixed::operator =(const Fixed &other) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
        this->_raw = other._raw;
    return (*this);
}

bool Fixed::operator >(const Fixed &other)
{
	return this->_raw > other._raw;
}

bool Fixed::operator <(const Fixed &other)
{
	return this->_raw < other._raw;
}
bool Fixed::operator >=(const Fixed &other)
{
	return this->_raw >= other._raw;
}
bool Fixed::operator <=(const Fixed &other)
{
	return this->_raw <= other._raw;
}
bool Fixed::operator ==(const Fixed &other)
{
	return this->_raw == other._raw;
}

bool Fixed::operator !=(const Fixed &other)
{
	return this->_raw != other._raw;
}

Fixed Fixed::operator +(const Fixed &other) const
{
	Fixed hello;
	hello.setRawBits(this->_raw + other._raw);
	return hello;
}

Fixed Fixed::operator *(const Fixed &other) const
{
	Fixed rtn;
    rtn.setRawBits((this->_raw * other.getRawBits()) >> this->_frac_bit);
    return (rtn);
}

Fixed Fixed::operator -(const Fixed &other) const
{
	Fixed hello;
	hello.setRawBits(this->_raw - other._raw);
	return hello;
}

Fixed Fixed::operator /(const Fixed &other) const
{
	Fixed hello;
	hello.setRawBits((this->_raw << this->_frac_bit) / other._raw);
	return hello;
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

Fixed& Fixed::operator ++()
{
	_raw++;
	return *this;
}

Fixed Fixed::operator ++(int)
{
	Fixed hello = *this;
	++*this;
	return hello;
}

Fixed& Fixed::operator --()
{
	_raw--;
	return *this;
}

Fixed Fixed::operator --(int)
{
	Fixed hello = *this;
	--*this;
	return hello;
}

Fixed& Fixed::min(Fixed &u, Fixed &v) { return (u < v ? u : v); }
const Fixed& Fixed::min(const Fixed &u, const Fixed &v) { return (u._raw < v._raw ? u : v); }
Fixed& Fixed::max(Fixed &u, Fixed &v) { return (u > v ? u : v); }
const Fixed& Fixed::max(const Fixed &u, const Fixed &v) { return (u._raw > v._raw ? u : v); }
	

float Fixed::toFloat() const
{
	return (float)this->_raw/ (float)(1 << this->_frac_bit);
}

int Fixed::toInt() const
{
	return (int)(this->_raw >> this->_frac_bit);
}