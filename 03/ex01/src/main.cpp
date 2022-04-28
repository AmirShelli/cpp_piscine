#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
	ScavTrap s1("BOB");
    ScavTrap s2(s1);

    s2.attack("TARGET");
    s2.takeDamage(23);
    s2.beRepaired(32);
	std::cout << s1.getAttackDamage() << std::endl;
    s2.guardGate();
    return 0;
}