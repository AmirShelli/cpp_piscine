#ifndef Harl_H
# define Harl_H

# include <iostream>
# include <string>

class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

typedef void (Harl::*ptr_to_Harl_func) (void);

#endif