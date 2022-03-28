#pragma once
#include "./Weapon.hpp"


class HumanB{
	private:
		std::string name;
		Weapon myWeapon;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon myWeapon);
		void setWeapon(Weapon myWeapon);
		void attack();
};