#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <ostream>

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