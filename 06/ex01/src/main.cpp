# include "../inc/serializer.hpp"
#include <iostream>
#include <string>

int main()
{
	Data* sample = new Data();
	std::cout << "S1    = "; std::getline (std::cin, sample->s1);
	std::cout << "N     = "; std::cin >> sample->n;

	uintptr_t raw = serialize(sample);
	Data* data = deserialize(raw);
	
	std::cout << "\nafter serializing.\n";
	std::cout << "S1    = " << data->s1 << std::endl;
	std::cout << "N     = " << data->n << std::endl;

	delete data;
}