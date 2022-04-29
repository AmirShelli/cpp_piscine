#include "../inc/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called FEAG" << std::endl;
	this->_hitC = 100;
	this->_energyC = 50;
	this->_attackC = 20;
	
	this->_hit = this->_hitC;
	this->_energy = this->_energyC;
	this->_attack = this->_attackC;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called FRAG" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Initialize constructor called FRAG" << std::endl;
	this->_name = name;
	this->_hitC = 100;
	this->_energyC = 100;
	this->_attackC = 30;
	this->_hit = this->_hitC;
	this->_energy = this->_energyC;
	this->_attack = this->_attackC;
}

FragTrap::FragTrap(const FragTrap &st1): ClapTrap(st1)
{
    std::cout << "Copy constuctor called FRAG" << std::endl;
    *this = st1;
}

FragTrap & FragTrap::operator= (const FragTrap &other)
{
	std::cout << "Assignation Operator Called FRAG" << std::endl;
	this->_hitC = other._hitC;
	this->_energyC = other._attackC;
	this->_attackC = other._energyC;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return (*this);
}

void    FragTrap::attack(const std::string &target)
{
	if(_hit && _energy)
		std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attack<< " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if(this->_hit)
	{
		if (amount > this->_hitC)
			amount = this->_hitC;
		std::cout << "FragTrap " << _name 
			<< " lost " << amount
			<< " hit points!" << std::endl;
		this->_hit -= amount;
	}
	else
		std::cout << "FragTrap " << this->_name 
			<< " already ded." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if(_hit && _energy)
	{
		if((this->_hit + amount) > this->_hitC)
			amount = this->_hitC - this->_hit;
		
		std::cout << "FragTrap " << this->_name 
			<< " restored " << amount 
			<< " hit points." << std::endl;
		this->_hit += amount;
		this->_energy--;
	}
	else
		std::cout << "FragTrap " << this->_name 
			<< " can't do anything." << std::endl;
}


void    FragTrap::highFivesGuys()
{
	if(_hit && _energy)
		std::cout << this->_name << " requests a positive high five?" << std::endl;
}
