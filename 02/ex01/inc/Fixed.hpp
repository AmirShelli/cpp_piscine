#include<iostream>

class Fixed{
private:
	int _value;
	static const int _frac_bit = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed operator =(const Fixed &other);
	std::ostream operator <<(const Fixed &obj) const;
	float toFloat() const;
	int toInt() const;
	int getRawBits() const;
	void setRawBits(int const value);


};