#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &ft1);
    FragTrap & operator=(const FragTrap & ft1);
    void	attack(std::string target);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif
