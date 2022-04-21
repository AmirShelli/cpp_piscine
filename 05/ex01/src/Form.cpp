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

Form::Form(const std::string name, const int sign, const int exec): _name(name), _gradeSign(sign), _gradeExec(exec)
{
	std::cout << "Initialize constructor called for Form " << _name << std::endl;
	this->_isSigned = 0;
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

void
