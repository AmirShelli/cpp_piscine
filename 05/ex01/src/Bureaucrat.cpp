#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Initialize constructor called" << std::endl;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &other)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->_grade = other._grade;
	return (*this);
}

int &Bureaucrat::getGrade()
{
	return this->_grade;
}

const std::string &Bureaucrat::getName() const 
{
	return this->_name;
}

const char *Bureaucrat::GradeTooHighException::what(void) const _NOEXCEPT
{
    return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const _NOEXCEPT
{
    return ("Grade is too low!");
}

void Bureaucrat::promote(void) throw(std::exception)
{
    if (_grade == 1)
        throw GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::demote(void) throw(std::exception)
{
    if (_grade == 150)
        throw GradeTooLowException();
    _grade += 1;
}

Bureaucrat::~Bureaucrat(void) 
{
	std::cout << "Destructor called for bureaucrat " << getName() << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

