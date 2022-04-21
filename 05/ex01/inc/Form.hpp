#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

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
	// Form(const Form& obj);
	// Form& operator= (const Form &obj);
	const std::string &getName() const;
	bool &getStatus();
	const int &getGrdSign() const;
	const int &getGrdExec() const;
	void beSigned(Bureaucrat a);

	class GradeTooHighException : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
	
	class GradeTooLowException : public std::exception
    {
	public:
        const char *what(void) const _NOEXCEPT;
    };
};

std::ostream &operator<<(std::ostream &os, Form obj);

#endif