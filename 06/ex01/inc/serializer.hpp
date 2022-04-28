#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

struct Data { std::string s1; int n;};

uintptr_t      serialize(Data * data);
Data *      deserialize(uintptr_t raw);

#endif