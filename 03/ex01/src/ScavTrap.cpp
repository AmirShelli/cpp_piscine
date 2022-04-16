#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called SCAV" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called SCAV" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Initializer constructor called SCAV" << std::endl;
	this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
}

// ScavTrap::ScavTrap(const ScavTrap &st1) //not working on Linux
// {
//     std::cout << "Copy constuctor called SCAV" << std::endl;
//     *this = st1;
// }

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
