#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string.h>

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
	
	int &getGrade();
	const std::string &getName() const;
	Bureaucrat(const Bureaucrat& obj);
	void promote() throw(std::exception);
	void demote() throw(std::exception);

	class GradeTooHighException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
	public:
        const char *what(void) const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif