
#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
    try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat bureaucrat2("Khalid", 5);
		// rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
		// rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		rrf = someRandomIntern.makeForm("ShrubberyCreation ", "Bender");
		bureaucrat2.signForm(*rrf);
		bureaucrat2.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}
