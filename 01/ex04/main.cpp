#include <iostream>
#include <fstream>
#include <istream>
#include <cstring>

void replace(char **str, char *s1, char *s2)
{
	while(std::strstr(*str, s1))
	{
		//change() ?
	}
}

int main(int ac, char *av[])
{
	std::ofstream fout;
	std::ifstream fin;

	char *line;
	if(ac < 4)
	{
		fin.open(av[1]);
		fout.open(std::strcat(av[1] , ".replace"));
		while(fout && fin)
		{
			fin.getline(line, std::strlen(line));
			replace(&line, av[2], av[3]);
			fout << line << std::endl;
		}
		//eof?
	}
	fin.close();
    fout.close();
}