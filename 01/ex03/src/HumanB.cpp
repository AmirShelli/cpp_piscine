#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &myWeapon)
{
	this->myWeapon = &myWeapon;
}

void HumanB::attack()
{
	std::cout << this->name 
		<< " attacks with their " 
		<< this->myWeapon->getType() << std::endl;
}