#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void    easyfind(T container, int oc)
{
    if (std::find(container.begin(), container.end(), oc) == container.end())
        std::cout << "element " << oc <<  " doesn't exist!" << std::endl;
    else
        std::cout << "element " << oc <<  " exists!" << std::endl;

}

#endif