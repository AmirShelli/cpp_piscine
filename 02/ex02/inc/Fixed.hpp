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

	bool operator >(const Fixed &other);
	bool operator <(const Fixed &other);
	bool operator >=(const Fixed &other);
	bool operator <=(const Fixed &other);
	bool operator ==(const Fixed &other);
	bool operator !=(const Fixed &other);

	Fixed operator +(const Fixed &other) const;
	Fixed operator *(const Fixed &other) const;
	Fixed operator -(const Fixed &other) const;
	Fixed operator /(const Fixed &other) const;

	Fixed& operator ++();
	Fixed& operator --();
	Fixed operator ++(int);
	Fixed operator --(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream& operator <<(std::ostream& stream, const Fixed &obj);
#endif