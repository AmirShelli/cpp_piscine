#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Initialize constructor called" << std::endl;
	this->_grade = grade;
}

// Bureaucrat::Bureaucrat(const Bureaucrat &other)
// {
// 	std::cout << "Copy Constructor Called" << std::endl;
// 	*this = other;
// }

// Bureaucrat & Bureaucrat::operator= (const Bureaucrat &other)
// {
// 	std::cout << "Assignation Operator Called" << std::endl;
// 	// this->_name = other._name; ?
// 	this->_grade = other._grade;
// 	return (*this);
// }

int &Bureaucrat::getGrade()
{
	return this->_grade;
}

const std::string &Bureaucrat::getName() const 
{
	return this->_name;
}

void Bureaucrat::promote()
{
	_grade--;
	if (_grade < 1)
		throw std::exception();
}

void Bureaucrat::demote()
{
	_grade++;
	if (_grade > 150)
		throw std::exception();
}

