class Fixed{
private:
	int _value;
	static const int _frac_bit = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();
	Fixed operator =(const Fixed &other);
	int getRawBits() const;
	void setRawBits(int const value);
};