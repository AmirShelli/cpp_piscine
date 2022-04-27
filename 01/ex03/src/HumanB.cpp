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
	if(myWeapon)
		std::cout << this->name 
			<< " attacks with their " 
			<< this->myWeapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon to attck with\n";
}