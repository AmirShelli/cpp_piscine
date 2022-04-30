#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeSign;
	const int _gradeExec;
public:
	Form();
	Form(const std::string name, const int sign, const int exec);
	~Form();
	Form(const Form& obj);
	const std::string &getName() const;
	bool &getStatus();
	const int &getGrdSign() const;
	const int &getGrdExec() const;
	void beSigned(Bureaucrat a);

	Form& operator= (const Form &obj);

	class GradeTooHighException : public std::exception
    {
    public:
        const char *what(void) const throw();
    };
	
	class GradeTooLowException : public std::exception
    {
	public:
        const char *what(void) const throw();
    };

	class IsAlreadySignedException : public std::exception
    {
	public:
        const char *what(void) const throw();
    };
	class UnsignedFormException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	virtual void action() const = 0;
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream &os, Form & f1);

#endif