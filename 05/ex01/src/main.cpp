#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

void printBureaucrat(Bureaucrat arr[4])
{
    for (int i = 0; i < 4; i++)
        std::cout << arr[i] << std::endl;
}
void printForm(Bureaucrat arr[4])
{
    for (int i = 0; i < 3; i++)
        std::cout << arr[i] << std::endl;
}
void test_1()
{
    std::cout << std::endl;
    std::cout << "[test_1]" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 1);
        Bureaucrat lark("Lark", 50);
        Bureaucrat mark("Mark", 100);
        Form a("a", 70, 140);
        Form b("b", 10, 20);
        bob.signForm(a);
        bob.signForm(b);
        std::cout << ">---------------------------------<" << std::endl;
        lark.signForm(a);
        lark.signForm(b);
        std::cout << ">---------------------------------<" << std::endl;
        mark.signForm(a);
        mark.signForm(b);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << bob << std::endl;
		std::cout << lark << std::endl;
		std::cout << mark << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
// void test_2()
// {
//     std::cout << std::endl;
//     std::cout << "[test_2]" << std::endl;
// 	Form a("a", 180, -1);
// 	std::cout << a << std::endl;
//     try
//     {
// 		Form a("a", 180, -1);
// 		std::cout << a << std::endl;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

int main(void)
{
    test_1();
    // test_2();

    return (0);
}