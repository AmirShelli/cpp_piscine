#include "../inc/main.hpp"

Base *generate(void) {
	int r = rand() % 100;

	if (r > 66)
		return (new A);
	if (r > 33)
		return (new B);
	return (new C);
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
}

void identify(Base &p) {
	try
	{
		(void)dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
	}
	catch (std::exception &e){}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e){}
	try
	{	(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e){}
}

int main() {
	srand(time(NULL));

	for (int i = 0; i < 500; i++)
	{
		Base *obj = generate();
		std::cout << "Test " << i << ": ";
		identify(obj);
		std::cout << ", ";
		identify(*obj);
		std::cout << std::endl;
		delete obj;
	}
}