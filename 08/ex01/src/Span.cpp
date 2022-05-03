#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span &Span::operator=(Span const &src)
{
    if (this != &src)
    {
        this->_N = src._N;
        for (size_t i = 0; i < src._N; i++)
        {
            this->_v.push_back(src._v[i]);
        }
    }
    return (*this);
}

void    Span::addNumber(int nb)
{
    if (this->_v.size() < this->_N)
        _v.push_back(nb);
    else
        throw IsFullException();

}

void    Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    while (first < last)
    {
        addNumber(*first);
        first++;
    }

}

const char *Span::IsFullException::what() const throw()
{
    return "error: array is full";
}

int Span::longestSpan()
{
    if (_v.size() <= 1)
        throw NoSpanException();
    else
    {
        std::sort(_v.begin(), _v.end());
        return (*(_v.end() - 1) - *_v.begin());
    }
}

int Span::shortestSpan()
{
    if (_v.size() <= 1)
        throw NoSpanException();
    else
    {
        std::sort(_v.begin(), _v.end());
        return (*(_v.begin() + 1) - *(_v.begin()) - 1);
    }
}

const char *Span::NoSpanException::what() const throw()
{
    return ("error: not enough elements");
}

Span::~Span()
{
    _v.clear();
}