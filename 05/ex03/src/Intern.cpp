#include "../inc/Intern.hpp"
Intern::Intern()
{
	std::cout << "Default Constructor called Intern" << std::endl;
}

Intern::Intern(Intern const &in)
{
	*this = in;
}

Intern& Intern::operator=(Intern const &in)
{
	(void)in;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called Intern" << std::endl;
}

Form    *getShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form    *getRoboto(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form    *getPresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*   Intern::makeForm(std::string name, std::string target)
{
	Form*	frm;
	std::string arr[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form* (*pmf[])(std::string) = {getShrubbery, getRoboto, getPresident};
	for (int i = 0; i < 3; i++)
		if (name == arr[i])
		{
			frm = pmf[i](target);
			std::cout << "Intern creates " << name << std::endl;
			return (frm);
		}
	throw Intern::ErrorException();
}

const char* Intern::ErrorException::what() const throw()
{
	return ("Error");
}