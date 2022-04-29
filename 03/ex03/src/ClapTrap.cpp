#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constuctor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap Initialize Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c1)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = c1;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &c1)
{
	std::cout << "ClapTrap Assignation Operator Called" << std::endl;
	this->_name = c1._name;
	this->_hit = c1._hit;
	this->_energy = c1._energy;
	this->_attack = c1._attack;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ",";
	std::cout << " causing " << this->_attack << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takedamage Called, amount :" << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired Called, amount :" << amount << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}
