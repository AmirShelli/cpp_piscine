#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_hitC = 10;
	this->_energyC = 10;
	this->_attackC = 0;
	this->_hit = this->_hitC;
	this->_energy = this->_energyC;
	this->_attack = this->_attackC;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name)
{
	std::cout << "Initialize constructor called" << std::endl;
	this->_name = name;
	this->_hitC = 10;
	this->_energyC = 10;
	this->_attackC = 0;
	
	this->_hit = this->_hitC;
	this->_energy = this->_energyC;
	this->_attack = this->_attackC;
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
	if(_hit && _energy)
	{
		std::cout << "ClapTrap " << _name 
			<< " attacks " << target << " causing "
			<< _attack << " points of damage!" << std::endl;
		_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name 
			<< " can't do anything." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_hit)
	{
		if (amount > _hitC)
			amount = _hitC;
		std::cout << "ClapTrap " << _name 
			<< " lost " << _attack 
			<< " hit points!" << std::endl;
		_hit -= amount;
	}
	else
		std::cout << "ClapTrap " << _name 
			<< " already ded." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hit && _energy)
	{
		std::cout << _hitC << std::endl;
		if((_hit + amount) > _hitC)
			amount = _hitC - _hit;
		
		std::cout << "ClapTrap " << _name 
			<< " restored " << amount 
			<< " hit points." << std::endl;
		_hit += amount;
		_energy--;
	}
	else
		std::cout << "ClapTrap " << _name 
			<< " can't do anything." << std::endl;
}

int ClapTrap::getAttackDamage() const { return (_attack); }