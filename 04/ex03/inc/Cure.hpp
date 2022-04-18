#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(const Cure &c1);
    Cure & operator=(const Cure &c1);
    
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif