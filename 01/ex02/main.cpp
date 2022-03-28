#include <string.h>
#include <iostream>

int main()
{
	std::string stringCST =  "HI THIS IS BRAIN";
	std::string *stringPTR = &stringCST;
	std::string &stringREF = *stringPTR;

	std::cout << "first task" << std::endl;
	std::cout << &stringCST << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "second task" << std::endl;
	std::cout << stringCST << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}