#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon myWeapon)
{
	this->name = name;
	this->myWeapon = myWeapon; 
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->myWeapon;
}