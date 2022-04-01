#pragma once
#include "./Weapon.hpp"


class HumanB{
	private:
		std::string name;
		Weapon *myWeapon;
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &myWeapon);
};