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

	if(ac == 4 && std::string(av[2]) != "" && std::string(av[3]) != "\0")
	{
		char *file = strdup(av[1]);

		fin.open(file);
		if (!fin.is_open())
		{
			std::cout << "can't oepn fin" << std::endl;
			delete file;
			return (-1);
		}

		fout.open(std::strcat(file , ".replace"));
		if (!fout.is_open())
		{
			std::cout << "can't open fout" << std::endl;
			fin.close();
			delete file;
			return (-1);
		}
		while(getline(fin, line))
		{	
			replace(line, av[2], av[3]);
			fout << line << std::endl;
		}
		fin.close();
		fout.close();

		delete file;
	}
	else
		std::cout << "wrong arguments!" << std::endl;
	
}