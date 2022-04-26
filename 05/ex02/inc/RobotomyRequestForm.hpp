#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm (std::string);
	RobotomyRequestForm(RobotomyRequestForm const &rrf);
	RobotomyRequestForm&    operator=(RobotomyRequestForm const &rrf);
	~RobotomyRequestForm();
    
	void    action() const;
};

#endif
