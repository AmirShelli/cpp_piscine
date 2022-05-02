#include "../inc/whatever.hpp"

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		int a = -1;
		int b = 8;
		int *a1 = &a;
		int *b1 = &b;
		std::string str1 = "string1";
		std::string str2 = "string2";
		
		std::cout << "a: " << *a1 << "      b: " << *b1 << std::endl;
		swap(a1, b1);
		std::cout << "a: " << *a1 << "      b: " << *b1 << std::endl;
		
		std::cout << "str1 " << str1 << "      str2: " << str2 << std::endl;
		swap(str1, str2);
		std::cout << "str1 " << str1 << "      str2: " << str2 << std::endl;
		
		char	x = 'a';
		char	y = 'b';
		std::cout << "x: " << x << "      y: " << y << std::endl;
		swap(x, y);
		std::cout << "x: " << x << "      y: " << y << std::endl;
		
		std::cout << "min: " << min(x, y) << std::endl;
		std::cout << "max: " << max(x, y) << std::endl;

		char	w = 'a';
		char	z = 'a';
		std::cout << "x: " << w << "      y: " << z << std::endl;
		swap(w, z);
		std::cout << "x: " << w << "      y: " << z << std::endl;
		
		std::cout << "min: " << min(w, z) << std::endl;
		std::cout << "max: " << max(w, z) << std::endl;
	}
	return (0);
}