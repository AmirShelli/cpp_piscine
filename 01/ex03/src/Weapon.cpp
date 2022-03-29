#include "../inc/Weapon.hpp"

void Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{
	setType("");
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

const std::string &Weapon::getType()
{
	const std::string &sample = this->type;
	return sample;
}