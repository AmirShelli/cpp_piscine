#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	std::cout << "Initialize constructor called "  << getName() << std::endl;
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

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

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

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("grade is too low!");
}

void Bureaucrat::promote(void)
{
    if (_grade == 1)
        throw GradeTooHighException();
    else
		this->_grade --;
}

void Bureaucrat::demote(void)
{
    if (_grade == 150)
        throw GradeTooLowException();
    else
		this->_grade ++;
}

Bureaucrat::~Bureaucrat(void) 
{
	std::cout << "Destructor called for bureaucrat " << getName() << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
		std::cerr << this->_name << " cannot sign "
		<< form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

