#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(): _hitC(100), _energyC(50), _attackC(20)
{
	std::cout << "ScavTrap default constructor called SCAV" << std::endl;
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

ScavTrap::ScavTrap(const ScavTrap &st1)
{
    std::cout << "Copy constuctor called SCAV" << std::endl;
    *this = st1;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &other)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return (*this);
}

void    ScavTrap::attack(std::string target)
{
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack<< " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
