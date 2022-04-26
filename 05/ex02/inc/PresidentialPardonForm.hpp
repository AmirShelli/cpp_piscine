#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& ppf);
	PresidentialPardonForm&     operator=(PresidentialPardonForm const& ppf);
	~PresidentialPardonForm();

	void	action() const;
};

#endif