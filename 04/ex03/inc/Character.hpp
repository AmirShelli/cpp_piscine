#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[4];
    int _count_m;
public:
    Character();
    ~Character();
    Character(const Character &c1);
    Character & operator=(const Character &c1);
    
    Character(std::string name);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    void deleting_inv();
};

#endif