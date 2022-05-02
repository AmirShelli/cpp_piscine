#include "../inc/iter.hpp"

int main()
{
	{	
		std::cout <<"function that prints everything:" << std::endl;
		int a[5] = {1, 2, 4, 5, 6};
		iter(a, 5 , f);
		std::cout << std::endl;
		
		float b[4] = {1.2f, 1.3f, 1.4f, 1.5f};
		iter(b, 4, f);
		std::cout << std::endl;

		std::string c[4] = {"a", "b", "c", "d"};
		iter(c, 4 , f);
		std::cout << std::endl;
	}
	{
		std::cout <<"\nfunction that sums everything:" << std::endl;
		int a[5] = {1, 2, 4, 5, 6};
		iter(a, 5 , g);
		std::cout << std::endl;
		
		float b[4] = {1.2f, 1.3f, 1.4f, 1.5f};
		iter(b, 4, g);
		std::cout << std::endl;

		std::string c[4] = {"a", "b", "c", "d"};
		iter(c, 4 , g);
		std::cout << std::endl;
	}
	return (0);
}