#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm(source)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
    this->target = source.target;
    return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->get_sign() == false)
		throw PresidentialPardonForm::IsNotException();
	if (executor.getGrade() > this->get_exec_grade())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->target + " has been pardoned by Zaphod BeebleBrox" << std::endl;
}

const char* PresidentialPardonForm::IsNotException::what() const throw()
{
	return ("This Form Is Not Signed!");
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& source)
{
	os << source.getTarget() << source.get_name() << source.get_sign_grade() << source.get_exec_grade() << std::endl;
	return os;
}