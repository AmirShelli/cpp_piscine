#include "../inc/Bureaucrat.hpp"
#include <ostream>

std::ostream &operator<<(std::ostream &os, Bureaucrat obj)
{
	os << obj.getName();
	// << ", bureaucrat grade " << obj.getGrade();
	return os;
}

int main()
{
	//return everything in const
	Bureaucrat b1("heu", 150);
        // b1.demote();
    std::cout << b1 << std::endl;
	// try
    // {
    //     Bureaucrat b1("bureaucrat name", 150);
    //     b1.demote();
    //     std::cout << b1 << std::endl;
    // }
    // catch(const std::exception& e)
    // {
	// 	std::cout << "oops, you seem to have an error." << std::endl;
    //     std::cerr << e.what() << '\n';
    // }
    
    return 0;
}