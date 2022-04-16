#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	// ScavTrap(const ScavTrap &st1);
	ScavTrap& operator= (const ScavTrap&obj);
	void attack(std::string target);
	void guardGate();
};

#endif