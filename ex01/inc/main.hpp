#ifndef MAIN_HPP
# define MAIN_HPP

# include <cctype>
# include <cstdio>
# include <string.h>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

struct info
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string secret;
};

void myGetline(std::string *input);

#endif