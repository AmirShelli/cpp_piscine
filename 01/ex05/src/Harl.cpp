#include "../inc/Harl.hpp"

void    Harl::debug(void)
{
    std:: cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Harl::info(void)
{
    std::cout<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout<< "This is unacceptable, I want to speak to the manager now."<< std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::complain(std::string level)
{
    std::string str[4] = 
	{
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
	};
    ptr_to_Harl_func ptr[4] =
	{
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
	};
    
    int i = 0;
    while (i < 4)
    {
        if (str[i] == level)
            ((this)->*ptr[i])();
        i++;
    }
}
