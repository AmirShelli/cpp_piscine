#ifndef HUMANB_HPP
#define HUMANB_HPP

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
#endif