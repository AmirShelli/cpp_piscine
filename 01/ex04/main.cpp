#include <cstdio>
#include <iostream>
#include <fstream>
#include <istream>
#include <cstring>

void replace(std::string &str, char *s1, char *s2)
{
	int found;

	while((found = str.find(s1)) != -1)
	{
		str.erase(found, strlen(s1));
		str.insert(found, s2);
	}
}

int main(int ac, char *av[])
{
	std::ofstream fout;
	std::ifstream fin;
	std::string line;
	char *file = strdup(av[1]);

	if(ac == 4 && std::string(av[2]) != "" && std::string(av[3]) != "\0")
	{
		fin.open(file);
		fout.open(std::strcat(file , ".replace"));	
		while(getline(fin, line))
		{	
			replace(line, av[2], av[3]);
			fout << line << std::endl;
		}
		delete file;
		fin.close();
		fout.close();
	}
	else 
	{	
		std::cout << "not enough arguments" << std::endl; 
		return (1);
	}
}