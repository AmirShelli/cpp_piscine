#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Initialize constructor called with a string" << std::endl;
	if(grade < 1){
		throw GradeTooHighException();
		this->_grade = 1;
	}
	else if(grade > 150){
		throw GradeTooLowException();
		this->_grade = 150;	
	}
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade) {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	this->_grade = op._grade;
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

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("grade is too low!");
}

void Bureaucrat::promote(void) throw(std::exception)
{
    if (_grade == 1)
        throw GradeTooHighException();
    else 
		_grade--;
}

void Bureaucrat::demote(void) throw(std::exception)
{
    if (_grade == 150)
        throw GradeTooLowException();
    else
		_grade++;
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

