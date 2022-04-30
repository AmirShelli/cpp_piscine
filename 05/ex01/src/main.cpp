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
//     try
//     {
//         Bureaucrat bob("bob", -1);
//         Bureaucrat lark("Lark", 50);
//         Bureaucrat mark("Mark", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {bob, lark, mark, Kim};
//         printBureaucrat(arr);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_3()
// {
//     std::cout << std::endl;
//     std::cout << "[test_3]" << std::endl;
//     try
//     {
//         Bureaucrat bob("bob", 1);
//         Bureaucrat lark("Lark", 50);
//         Bureaucrat mark("Mark", 100);
//         Bureaucrat Kim("Kim", 1500);
//         Bureaucrat arr[4] = {bob, lark, mark, Kim};
//         print(arr);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_4()
// {
//     std::cout << std::endl;
//     std::cout << "[test_4]" << std::endl;
//     try
//     {
//         Bureaucrat bob("bob", 1);
//         Bureaucrat lark("Lark", 50);
//         Bureaucrat mark("Mark", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {bob, lark, mark, Kim};
//         print(arr);
//         bob.setGradeIncrement();
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_5()
// {
//     std::cout << std::endl;
//     std::cout << "[test_5]" << std::endl;
//     try
//     {
//         Bureaucrat bob("bob", 1);
//         Bureaucrat lark("Lark", 50);
//         Bureaucrat mark("Mark", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {bob, lark, mark, Kim};
//         print(arr);
//         Kim.setGradeDecrement();
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_6()
// {
//     std::cout << std::endl;
//     std::cout << "[test_6]" << std::endl;
//     try
//     {
//         Bureaucrat bob("bob", 1);
//         Bureaucrat lark("Lark", 50);
//         Bureaucrat mark("Mark", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {bob, lark, mark, Kim};
//         print(arr);
//         std::cout << std::endl;
//         lark.setGradeIncrement();
//         lark.setGradeIncrement();
//         mark.setGradeDecrement();
//         mark.setGradeDecrement();
//         Bureaucrat arr_2[4] = {bob, lark, mark, Kim};
//         print(arr_2);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_7()

// {
//     std::cout << std::endl;
//     std::cout << "[test_7]" << std::endl;
//     try
//     {

//         Bureaucrat bob("bob", 1);
//         Bureaucrat lark("Lark", 10);
//         Bureaucrat mark("Mark", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {bob, lark, mark, Kim};
//         print(arr);
//         std::cout << std::endl;
//         for (int i = 0; i < 10; i++)
//         {

//             std::cout << "index = " << i << ",  " << lark << std::endl;
//             lark.setGradeIncrement();
//         }
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
    // test_3();
    // test_4();
    // test_5();
    // test_6();
    // test_7();

    return (0);
}