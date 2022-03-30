#include "../inc/Weapon.hpp"

void Weapon::setType(const std::string type)
{
	const std::string &aux = this->getType();
	aux = type;
}

Weapon::Weapon()
{
	this->type = "";
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