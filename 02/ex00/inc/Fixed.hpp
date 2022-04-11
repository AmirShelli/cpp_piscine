class Fixed{
private:
	int _value;
	static const int _frac_bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	
};