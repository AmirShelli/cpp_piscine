#include "../inc/main.hpp"

Base *generate(void) {
	int r = rand() % 100;

	if (r > 66)
		return (new A);
	if (r > 33)
		return (new B);
	return (new C);
}

void showType(Base *p) {
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
}

void identify(Base *p) {
	showType(p);
}

void identify(Base &p) {
	try
	{
		showType(&p);
	}
	catch (std::exception &e)
	{
		std::cout << "oops." << std::endl;
	}
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