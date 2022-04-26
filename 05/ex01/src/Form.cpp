#include "../inc/Form.hpp"

Form::Form():_name("name"), _gradeSign(1), _gradeExec(1)
{
	std::cout << "Form default constructor called" << std::endl;
	this->_isSigned = 0;
}

Form::~Form()
{
	std::cout << "Destructor called for " << this->_name << std::endl;
}

const char *Form::GradeTooLowException::what(void) const _NOEXCEPT
{
    return ("grade is too low!");
}

const char *Form::GradeTooHighException::what(void) const _NOEXCEPT
{
    return ("grade is too high!");
}

Form::Form(const std::string name, const int sign, const int exec): _name(name), _gradeSign(sign), _gradeExec(exec)
{
	std::cout << "Initialize constructor called for Form " << _name << std::endl;
	this->_isSigned = 0;
	if (_gradeSign < 1 || _gradeExec < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExec > 150)
        throw GradeTooLowException();
}

const std::string &Form::getName() const
{
	return this->_name;
}
bool &Form::getStatus()
{
	return this->_isSigned;
}
const int &Form::getGrdSign() const
{
	return _gradeSign;
}
const int &Form::getGrdExec() const
{
	return _gradeExec;
}

void Form::beSigned(Bureaucrat a)
{
	if(a.getGrade() <= _gradeSign)
		this->_isSigned = 1;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form obj)
{
	os << "Form " << obj.getName() <<":\n"
	<< "signture? " <<obj.getStatus() << std::endl
	<< "needed grade to sign? " <<obj.getGrdSign() << std::endl
	<< "needed grade to execute?" <<obj.getGrdExec() << std::endl;
	return os;
}
