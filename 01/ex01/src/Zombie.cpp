#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() 
{
	std::cout << this->name << " was deleted\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}