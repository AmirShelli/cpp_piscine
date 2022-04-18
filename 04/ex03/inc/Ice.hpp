#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
    
public:
    Ice();
    ~Ice();
    Ice(const Ice &c1);
    Ice & operator=(const Ice &c1);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif