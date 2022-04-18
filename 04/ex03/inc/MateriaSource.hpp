#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _inventory[4];
    int _count_m;
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &ms1);
    MateriaSource & operator=(const MateriaSource &ms1);
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
    void delete_inv();
};

#endif