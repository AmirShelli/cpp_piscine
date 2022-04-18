#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& obj);
	Brain& operator= (const Brain &obj);
};

#endif