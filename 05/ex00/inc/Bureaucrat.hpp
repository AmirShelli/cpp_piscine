#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string.h>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator= (const Bureaucrat &obj);
	int &getGrade();
	const std::string &getName() const;
	void promote() throw(std::exception);
	void demote() throw(std::exception);

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

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif