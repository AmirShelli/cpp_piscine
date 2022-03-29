#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

const std::string &Weapon::getType()
{
	const std::string &sample = this->type;
	return sample;
}