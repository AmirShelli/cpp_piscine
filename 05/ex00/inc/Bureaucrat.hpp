#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
private:
	std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator= (const Bureaucrat &obj);
	int &getGrade();
	std::string &getName();
	void promote();
	void demote();
};
#endif