#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"


class HumanA{
	private:
		std::string name;
		Weapon *myWeapon;
	public:
		HumanA(std::string name, Weapon &myWeapon);
		void setWeapon(Weapon &myWeapon);
		void attack();
};
#endif