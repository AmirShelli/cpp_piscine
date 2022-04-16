#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _name;
    int         _hitpoints;
    int         _energy_points;
    int         _attack_damage;
public:
    ClapTrap();
    ~ClapTrap();
    
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &c1);
    ClapTrap & operator=(const ClapTrap &c1);
    
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif
