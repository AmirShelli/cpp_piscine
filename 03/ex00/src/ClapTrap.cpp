#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =(ClapTrap &other) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return *this;
}

// ClapTrap::ClapTrap(const ClapTrap &other)
// {
// 	std::cout << "Copy constructor called" << std::endl;
// 	other = this;
// }

void ClapTrap::attack(const std::string& target)
{
	if(this->_hit && this->_energy)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " attacks " << target << " causing "
			<< this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name 
			<< " can't do anything." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hit)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " lost " << this->_attack 
			<< " hit points!" << std::endl;
		this->_hit -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name 
			<< " already ded." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_hit && this->_energy)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " restored " << amount 
			<< " hit points." << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name 
			<< " can't do anything." << std::endl;
}