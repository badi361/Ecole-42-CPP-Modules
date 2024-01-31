#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& intern)
{
    *this = intern;
}

Intern& Intern::operator=(const Intern& intern)
{
    (void)intern;
    return (*this);
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
    int i;
    i = 0;
    std::string formnames[3] = {"shrubbery request", "robotomy request", "presidential request"};
    AForm* forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};

    while (i < 3)
    {
        if (form_name == formnames[i])
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return (forms[i]);
        }
        i++;
    }
    std::cout << "Intern could not create " + form_name << std::endl;
    return (NULL);
} 