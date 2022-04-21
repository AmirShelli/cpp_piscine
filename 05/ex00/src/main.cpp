#include "../inc/Bureaucrat.hpp"
#include <ostream>

int main()
{
	try
    {
        Bureaucrat b1("bureaucrat name", 150);
        b1.demote();
        std::cout << b1 << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}