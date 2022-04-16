#include "../inc/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called FRAG" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called FRAG" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Initialize constructor called FRAG" << std::endl;
    _name = name;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

// FragTrap::FragTrap(const FragTrap &st1) //not working on Linux
// {
//     std::cout << "Copy constuctor called Frag" << std::endl;
//     *this = st1;
// }

FragTrap & FragTrap::operator= (const FragTrap &other)
{
	std::cout << "Assignation operator called FRAG" << std::endl;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return (*this);
}



void    FragTrap::highFivesGuys()
{
    std::cout << "positive high fives request" << std::endl;
}
