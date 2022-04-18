#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	// WrongCat(const WrongAnimal& obj);
	WrongCat& operator= (const WrongCat &obj);
	void makeSound(void) const;
};

#endif