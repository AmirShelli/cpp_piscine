#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy){};
        virtual ~MutantStack() {};

        MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };
		typedef typename std::deque<T>::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end() { return (std::stack<T>::c.end()); }

};

#endif