#include <cctype>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <sstream>

#include "../inc/main.hpp"
#include "../inc/phonebook.hpp"
#include "../inc/contact.hpp"

void myGetline(std::string *input)
{
	std::cin.sync();
	getline(std::cin, *input);
	if(*input == "EXIT" || *input == "exit")
		exit(1);
}

int main()
{
	std::string input;
	PhoneBook sample;

	while(1)
	{
		std::cout << "\nchoose a command:\n"
		<< "\tADD\tSEARCH\tEXIT\n";
		myGetline(&input);
		if(input == "SEARCH" || input == "search")
			sample.search();
		else 
		{
			if((input == "add" || input == "add"))
				sample.add();
			else
				std::cout << "sorry, no such option.\n";
		}
		
	}
}