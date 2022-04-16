#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class  DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap & d1);
    DiamondTrap & operator=(const DiamondTrap & d1);
    
    void attack(std::string target);
    void whoAmI();
    ~ DiamondTrap();
};

#endif
