# include "../inc/serializer.hpp"

uintptr_t    serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *      deserialize(uintptr_t raw)
{
	// Data *rtn = new Data;

	// rtn->s1 = std::string(reinterpret_cast<char *>(raw) + 1, 8);
	// rtn->n = (*reinterpret_cast<int *>(raw) + 8);
	// rtn->s2 = std::string(reinterpret_cast<char *>(raw) + 33, 8);
	// return (rtn);
	return (reinterpret_cast<Data *>(raw));
}