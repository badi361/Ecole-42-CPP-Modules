#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source) : AForm(source)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
    this->target = source.target;
    return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->get_sign() == false)
		throw RobotomyRequestForm::IsNotException();
	if (executor.getGrade() > this->get_exec_grade())
		throw AForm::GradeTooLowException();
	else
	{
        srand(time(0));
		if (rand() % 2 == 1)
			std::cout << this->target + " has been robotomized!" << std::endl;
		else
			std::cout << this->target + " robotomy failed!" << std::endl;
    }	
}

const char* RobotomyRequestForm::IsNotException::what() const throw()
{
	return ("This Form Is Not Signed!");
}
