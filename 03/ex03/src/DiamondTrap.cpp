#include "../inc/DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & d1)
{
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = d1;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & d1)
{
    std::cout << "DiamondTrap Assignation operator Called" << std::endl;
    this->_Name = d1._Name;
    this->_name = d1._name;
    this->_hit = d1._hit;
    this->_energy = d1._energy;
    this->_attack = d1._attack;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Initialize Constructor Called" << std::endl;
    _Name = name;
    ClapTrap::_name = name + "_clap_name";
    _hit = FragTrap::_hit;

    _energy = 50;

    _attack = FragTrap::_attack;

}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name:" << this->_Name << std::endl;
    std::cout << "Diamond ClapTrap name:" << ClapTrap::_name << std::endl;
}

DiamondTrap::~ DiamondTrap()
{
    std::cout << "DiamondTrap Destructor Called" << std::endl;
}
