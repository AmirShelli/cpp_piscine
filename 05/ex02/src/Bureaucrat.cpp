#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
    std::cout<< "Initialize Constructor Called" << std::endl;   
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    std::cout << "Copy constructor Called" << std::endl;
    *this = b;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
    std::cout<< "Assignement operator Called" << std::endl;
    _grade = b._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
}
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too Hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

const std::string & Bureaucrat::getName() const
{
    return (_name);
}

const int & Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::increment()
{
    if (_grade == 1)
        throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrement()
{
    if (_grade == 150)
        throw GradeTooLowException();
	_grade++;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b)
{
    os << b.getGrade();
    return (os);
}

void    Bureaucrat::signForm(Form &f1)
{
    try
    {
        f1.beSigned(*this);
        std::cout <<"<"<<_name<<"> signs <"<<f1.getName()<<">"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"<"<<_name<<"> cannot sign because <"<<e.what()<<">"<<std::endl;
    }
    
}

void	Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->getName() << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "<" << this->getName() << "> cannot executes <" << form.getName() << "> because " << e.what() << std::endl;
	}
}