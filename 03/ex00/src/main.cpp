#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap c("claptrap name");
	ClapTrap a(c);
	
	a.attack("target");
	a.takeDamage(12);
	a.beRepaired(12);
	return 0;
}