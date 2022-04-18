#include "../inc/AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default constructor called AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &am1)
{
    std::cout << "Copy Constructor Called AMateria" << std::endl;
    *this = am1;
}

AMateria & AMateria::operator=(const AMateria &am1)
{
    std::cout << "Assignement operator Called AMateria" << std::endl;
    _type = am1._type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor called AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter & target)
{
    (void)target;
}
