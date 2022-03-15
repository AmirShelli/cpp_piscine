#include <string.h>
#include <iostream>
#include <cctype>

class ToUpper {
	public:
		ToUpper(int argc, char **input)
		{
			if(argc > 1)
				for (int j = 1; j < argc; j++)
				{	
					for(unsigned long i = 0; i < strlen(input[j]); i++)
						std::cout << (char)toupper(input[j][i]);
					std::cout << ' ';
				}
			else
				std::cout << "* LOUD AND UNREADABLE FEEDBACK NOISE *";
			std::cout << std::endl;
		};
};

int main(int argc, char **argv)
{
	ToUpper Execution(argc, argv);
	return (1);
}