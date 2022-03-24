#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie *sample;

	sample = newZombie("hype boi");
	sample->announce();
	randomChump("Stacc boi");
	delete sample;
}