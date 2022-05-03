#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <class T>
class Array
{
private:
	unsigned int	_size;
	T				*_ptr;
public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const&);
	Array& operator=(Array<T> const &);
	T&	operator[](unsigned int index);
	unsigned int const& size( void )const;
	~Array();
};

template <typename T>
Array<T>::Array(): _size(0), _ptr(nullptr) {std::cout << "Default" << std::endl;}

template <typename T>
Array<T>::Array(unsigned int n): _size(n), _ptr(nullptr)
{
	std::cout << "Constructor" << std::endl;
	this->_ptr = new T[this->_size]();
}

template <typename T>
Array<T>::Array(Array<T> const& other): _size(0), _ptr(nullptr)
{
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& other)
{
	if (this->_size > 0) 
		delete [] this->_ptr;
	this->_ptr = nullptr;
	this->_size = other._size;
	if(this->_size > 0)
	{
		this->_ptr = new T[this->_size]();
		for (size_t i = 0; i < this->_size; i++)
			this->_ptr[i] = other._ptr[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index > this->_size)
		throw std::out_of_range("out of limits");
	return (this->_ptr[index]);
}

template <typename T>
unsigned int const& Array<T>::size( void ) const
{
	return (this->_size);
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor" << std::endl;
	if (this->_size > 0)
		delete [] this->_ptr;
}

#endif
