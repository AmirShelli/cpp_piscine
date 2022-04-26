#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "Form.hpp"

class  ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &sh1);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &sh1);
    
    void action() const;
};

#endif