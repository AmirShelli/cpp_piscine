#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Initialize constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &other)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return (*this);
}

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
		if (amount > _hit)
			amount = _hit;
		std::cout << "ClapTrap " << this->_name 
			<< " lost " << amount 
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
		if((_hit + amount) > 10)
			amount = 10 - _hit;
		std::cout << "ClapTrap " << this->_name 
			<< " restored " << amount 
			<< " hit points." << std::endl;
		_hit += amount;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name 
			<< " can't do anything." << std::endl;
}

int ClapTrap::getAttackDamage() const
{
    return (_attack);
}