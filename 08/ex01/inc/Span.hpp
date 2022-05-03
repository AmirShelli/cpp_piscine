#ifndef SPAN_HPP
#define SPAN_HPP
#include <exception>
#include <vector>
#include <iostream>
#include <algorithm>

class Span {
private:
	unsigned int _N;
    std::vector<int> _v;
public:
	Span(unsigned int);
	Span();
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();
	void addNumber(int nb);
	void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);

	int shortestSpan();
	int longestSpan();

	class NoSpanException : std::exception {
	public:
		const char *what() const throw(); 
	};

	class IsFullException : std::exception {
	public:
		const char *what() const throw(); 
	};
};

#endif