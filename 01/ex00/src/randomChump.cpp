#include "../inc/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie stack(name);
	stack.announce();
}