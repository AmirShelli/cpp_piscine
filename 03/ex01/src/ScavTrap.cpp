#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called SCAV" << std::endl;
	this->_hitC = 100;
	this->_energyC = 50;
	this->_attackC = 20;
	
	this->_hit = this->_hitC;
	this->_energy = this->_energyC;
	this->_attack = this->_attackC;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called SCAV" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Initialize constructor called" << std::endl;
	this->_name = name;
	this->_hitC = 100;
	this->_energyC = 50;
	this->_attackC = 20;
	this->_hit = this->_hitC;
	this->_energy = this->_energyC;
	this->_attack = this->_attackC;
}

ScavTrap::ScavTrap(const ScavTrap &st1): ClapTrap(st1)
{
    std::cout << "Copy constuctor called SCAV" << std::endl;
    *this = st1;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &other)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->_hitC = other._hitC;
	this->_energyC = other._attackC;
	this->_attackC = other._energyC;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
	if(_hit && _energy)
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack<< " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if(this->_hit)
	{
		if (amount > this->_hitC)
			amount = this->_hitC;
		std::cout << "ScavTrap " << _name 
			<< " lost " << amount
			<< " hit points!" << std::endl;
		this->_hit -= amount;
	}
	else
		std::cout << "ScavTrap " << this->_name 
			<< " already ded." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if(_hit && _energy)
	{
		if((this->_hit + amount) > this->_hitC)
			amount = this->_hitC - this->_hit;
		
		std::cout << "ScavTrap " << this->_name 
			<< " restored " << amount 
			<< " hit points." << std::endl;
		this->_hit += amount;
		this->_energy--;
	}
	else
		std::cout << "ScavTrap " << this->_name 
			<< " can't do anything." << std::endl;
}

void    ScavTrap::guardGate()
{
	if(_hit && _energy)
		std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode" << std::endl;
}
