#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <math.h>

class Fixed{
private:
	int _raw;
	static const int _frac_bit = 8;
public:
	~Fixed();
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed &operator =(const Fixed &other);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream& operator <<(std::ostream& stream, const Fixed &obj);

#endif