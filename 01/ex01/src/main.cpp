#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main()
{
	Zombie *sample;

	sample = zombieHorde(5, "meme lord");
	for (int i = 0; i <= 5; i++)
		sample[i].announce();
	delete sample;
}