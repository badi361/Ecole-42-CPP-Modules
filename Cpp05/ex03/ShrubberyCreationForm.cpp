#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source) : AForm(source)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
    this->target = source.target;
    return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_sign() == false)
		throw ShrubberyCreationForm::IsNotException();
	if (executor.getGrade() > this->get_exec_grade())
		throw AForm::GradeTooLowException();
	else
	{
        std::ofstream file(this->target + "_ShrubberyCreationForm");
        if (file.is_open())
        {
            file <<
"               * \n"
"              *** \n"
"             ***** \n"
"            ******* \n"
"           ********* \n"
"          *********** \n"
"         ************* \n"
"        *************** \n"
"       ***************** \n"
"      ******************* \n"
"     ********************* \n"
"    *********************** \n"
"   ************************* \n"
"  *************************** \n"
" ***************************** \n"
"*******************************\n"
"               |               \n" << std::endl;
            file.close();
        }
        else
            throw ShrubberyCreationForm::FileCouldntOpen();

    }	
}

const char* ShrubberyCreationForm::FileCouldntOpen::what() const throw()
{
    return ("File Could Not Be Opened!");
}

const char* ShrubberyCreationForm::IsNotException::what() const throw()
{
	return ("This Form Is Not Signed!");
}
