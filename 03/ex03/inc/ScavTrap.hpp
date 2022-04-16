#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &st1);
	ScavTrap & operator=(const ScavTrap &st1);
	void	attack(std::string target);
	
	void guardGate();
	~ScavTrap();
};

#endif
