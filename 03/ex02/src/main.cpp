#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
	FragTrap s1("GAF");
    FragTrap s2(s1);

    s2.attack("TARGET");
    s2.takeDamage(33);
    s2.beRepaired(320);
    s2.highFivesGuys();
    return 0;
}