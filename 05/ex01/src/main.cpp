#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <ostream>

std::ostream &operator<<(std::ostream &os, Bureaucrat obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

std::ostream &operator<<(std::ostream &os, Form obj)
{
	os << "Form " << obj.getName() <<":\n"
	<< "signture? " <<obj.getStatus() << std::endl
	<< "needed grade to sign? " <<obj.getGrdSign() << std::endl
	<< "needed grade to execute?" <<obj.getGrdExec() << std::endl;
	return os;
}

int main()
{
	try
    {
        Bureaucrat b1("bureaucrat name", 150);
        b1.demote();
        std::cout << b1 << std::endl;
    }
    catch(const char *e)
    {
		std::cout << "oops, you seem to have an error." << std::endl;
        std::cerr << e << '\n';
    }
    
    return 0;
}