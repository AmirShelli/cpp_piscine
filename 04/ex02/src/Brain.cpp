#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;

	for (int i = 0; i < 100; i++)
    {
        _ideas[i] = "string in ideas";
		//  + std::to_string(i);
    }
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain & Brain::operator= (const Brain &other)
{
	int i = 0;
	int size = sizeof(other._ideas)/sizeof(other._ideas[0]);
	std::cout << "Brain assignation operator called" << std::endl;
	while(i < size)
	{	
		this->_ideas[i] = other._ideas[i];
		i++;
	}
	return (*this);
}

std::string Brain::getIdeas(const int i) const
{
    return (_ideas[i]);
}