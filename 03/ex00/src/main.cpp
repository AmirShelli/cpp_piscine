#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap c("claptrap name");
	ClapTrap a(c);
	
	a.attack("target");
	a.takeDamage(5);
	a.beRepaired(12);
	a.attack("target");

	std::cout << "---" << std::endl;

	ClapTrap hello("hello");
    ClapTrap world("world");
    ClapTrap hi("hi");

    std::cout << std::endl;

    hello.attack("world");
    world.takeDamage(hello.getAttackDamage());
    std::cout << std::endl;

    world.attack("hello");
    hello.takeDamage(world.getAttackDamage());
    std::cout << std::endl;

    hi.attack("world");
    world.takeDamage(hi.getAttackDamage());
    std::cout << std::endl;

    hello.beRepaired(25);
    world.beRepaired(25);
    hi.beRepaired(25);
    std::cout << std::endl;
    return (0);
	return 0;
}