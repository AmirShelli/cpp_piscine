#include "../inc/Cure.hpp"

Cure::Cure()
{
    std::cout << "Default Constructor Called Cure" << std::endl;
    _type = "cure";
}

Cure::~Cure()
{
    std::cout << "Destructor Called Cure" << std::endl;
}

Cure::Cure(const Cure &c1) : AMateria(c1)
{
    std::cout << "Copy Constructor Called Cure" << std::endl;
    *this = c1;
}

Cure & Cure::operator=(const Cure &c1)
{
    std::cout << "Assignement Operator Called Cure" << std::endl;
    _type = c1._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *m = new Cure();
    return (m);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *"<<std::endl;
}
