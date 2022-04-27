#include <iostream>
#include "../inc/Harl.hpp"

int main()
{
    Harl *message = new Harl();
    std::string level;

    std::cout << "enter a level: ";
    std::cin >> level;
    message->complain(level);
	delete message;
}