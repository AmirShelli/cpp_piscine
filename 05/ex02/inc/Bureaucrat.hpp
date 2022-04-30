#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class  Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat & operator=(const Bureaucrat& op);
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& obj);
	void promote();
	void demote();
	void signForm(Form &form);
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
	
	const std::string &	getName() const;
	const int &			getGrade() const;
	void				executeForm(Form const& form);
	
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b);

#endif
