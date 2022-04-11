#include "../inc/Fixed.hpp" 

Fixed::Fixed() 
{ 
	this->_value = 0;
};

Fixed::Fixed(const Fixed &other)
{
	other = this;
};
