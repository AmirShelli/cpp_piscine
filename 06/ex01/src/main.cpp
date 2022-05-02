# include "../inc/serializer.hpp"
#include <iostream>
#include <string>

int main()
{
	Data* sample = new Data();
	std::cout << "S1    = "; std::getline (std::cin, sample->s1);
	std::cout << "N     = "; std::cin >> sample->n;
	std::cout << "Data		= " << sample << std::endl;
	std::cout << "S1 *		= " << &(sample->s1) << std::endl;
	std::cout << "N  *		= " << &(sample->n) << std::endl;

	uintptr_t raw = serialize(sample);
	std::cout << "Serialized data = " << raw << std::endl;
	Data* data = deserialize(raw);
	
	std::cout << "\nafter serializing.\n";
	std::cout << "S1    = " << data->s1 << std::endl;
	std::cout << "N     = " << data->n << std::endl;
	std::cout << "Data		= " << data << std::endl;
	std::cout << "S1 *		= " << &(data->s1) << std::endl;
	std::cout << "N  *		= " << &(data->n) << std::endl;
	delete data;
}