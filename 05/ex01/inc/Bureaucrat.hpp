#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat& operator= (const Bureaucrat &obj);
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& obj);
	int &getGrade();
	const std::string &getName() const;
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
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif