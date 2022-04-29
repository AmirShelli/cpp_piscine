#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
	FragTrap s1("GAF");
    FragTrap s2(s1);

    s2.attack("TARGET");
    s2.takeDamage(33);
    s2.beRepaired(320);
    s2.highFivesGuys();

	std::cout << "---\n";
	ClapTrap hello("hello");
    ScavTrap hi("hi");
    FragTrap hey("hey");

    std::cout << std::endl;

    hello.attack("hey");
    hey.takeDamage(hello.getAttackDamage());
    std::cout << std::endl;

    hey.attack("hello");
    hello.takeDamage(hey.getAttackDamage());
    std::cout << std::endl;

    hi.attack("hey");
    hey.takeDamage(hi.getAttackDamage());
    std::cout << std::endl;

    hello.beRepaired(25);
    hey.beRepaired(25);
    hi.beRepaired(25);
    std::cout << std::endl;

    hi.guardGate();
    hey.highFivesGuys();
    std::cout << std::endl;
    return (0);
    return 0;
}