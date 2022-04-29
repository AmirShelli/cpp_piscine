#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
protected:
	std::string _ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& obj);
	Brain& operator= (const Brain &obj);
	std::string getIdeas(const int i) const;
};

#endif