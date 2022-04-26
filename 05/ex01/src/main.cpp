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
// void test_1()
// {
//     std::cout << std::endl;
//     std::cout << "[test_1]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Bob", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Form a("a", 70, 140);
//         Form b("b", 10, 20);
//         Shin.signForm(a);
//         Shin.signForm(b);
//         std::cout << ">---------------------------------<" << std::endl;
//         Kang.signForm(a);
//         Kang.signForm(b);
//         std::cout << ">---------------------------------<" << std::endl;
//         Park.signForm(a);
//         Park.signForm(b);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
void test_2()
{
    std::cout << std::endl;
    std::cout << "[test_2]" << std::endl;
    try
    {
        Bureaucrat Shin("Shin", -1);
        Bureaucrat Kang("Kang", 50);
        Bureaucrat Park("Park", 100);
        Bureaucrat Kim("Kim", 150);
        Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
        printBureaucrat(arr);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
// void test_3()
// {
//     std::cout << std::endl;
//     std::cout << "[test_3]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 1500);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
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
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         Shin.setGradeIncrement();
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
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
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
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         std::cout << std::endl;
//         Kang.setGradeIncrement();
//         Kang.setGradeIncrement();
//         Park.setGradeDecrement();
//         Park.setGradeDecrement();
//         Bureaucrat arr_2[4] = {Shin, Kang, Park, Kim};
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

//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 10);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         std::cout << std::endl;
//         for (int i = 0; i < 10; i++)
//         {

//             std::cout << "index = " << i << ",  " << Kang << std::endl;
//             Kang.setGradeIncrement();
//         }
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
int main(void)
{
    // test_1();
    test_2();
    // test_3();
    // test_4();
    // test_5();
    // test_6();
    // test_7();

    return (0);
}