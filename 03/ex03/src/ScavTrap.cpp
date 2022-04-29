#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constuctor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Initialize Constuctor Called" << std::endl;
    this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &st1)
{
    std::cout << "ScavTrap Copy Constuctor Called" << std::endl;
    *this = st1;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &st1)
{
    std::cout << "ScavTrap Assignation Operator Called" << std::endl;
    this->_name = st1._name;
    this->_hit = st1._hit;
    this->_energy = st1._energy;
    this->_attack = st1._attack;
    return (*this);
}

void    ScavTrap::attack(std::string target)
{
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " 
	<< this->_attack << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destuctor Called" << std::endl;
}
