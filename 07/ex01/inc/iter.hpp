#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T> 
void f(T &something) 
{
	std::cout << something << "\t";
}

template<typename T> 
void g(T &something) 
{
	static T sum;
	sum += something;
	std::cout << sum << "\t";
}

template<typename T>
void iter(T* array, int length, void (*f)(T &)) 
{
	for(int i = 0; i < length; i++)
		(*f)(array[i]);
}

#endif