#ifndef INTERN_HPP
#define INTERN_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern& intern);
        Intern& operator=(const Intern& Intern);
        AForm* makeForm(std::string form_name, std::string target);
};

#endif