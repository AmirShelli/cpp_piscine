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
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat & operator=(const Bureaucrat &b);
	~Bureaucrat();
	
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	
	const std::string &	getName() const;
	const int &			getGrade() const;
	void				increment();
	void				decrement();

	void				signForm(Form &f1);
	void				executeForm(Form const& form);
	
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b);

#endif
