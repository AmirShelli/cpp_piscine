#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _name;
    int         _hit;
    int         _energy;
    int         _attack;
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
