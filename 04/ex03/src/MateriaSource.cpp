#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource(): _count_m(0)
{
    std::cout << "Default constructor called MateriaSouce" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor called MateriaSouce" << std::endl;
    delete_inv();
}

MateriaSource::MateriaSource(const MateriaSource &ms1)
{
    std::cout << "copy constructor called MateriaSouce" << std::endl;
    *this = ms1;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &ms1)
{
    std::cout << "Assignement operator called MateriaSouce" << std::endl;
    _count_m = ms1._count_m;
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = ms1._inventory[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m)
    {
        if (_count_m < 4)
        {
            _inventory[_count_m] = m;
            _count_m++;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < _count_m; i++)
    {
        if (type == _inventory[i]->getType())
            return (_inventory[i]->clone());
    }
    return (0);
}

void MateriaSource::delete_inv()
{
    for (int i = 0; i < _count_m; i++)
    {
        delete _inventory[i];
    }
    
}
