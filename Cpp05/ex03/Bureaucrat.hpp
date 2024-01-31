#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"
class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int         grade;
    public:
        Bureaucrat();
		~Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(int grade);
        std::string getName() const;
        int getGrade() const;
        void    increment(int n);
        void    decrement(int n);
        Bureaucrat(const Bureaucrat &cpy);
        void    executeForm(AForm const & form);
        void    signForm(AForm &form);
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        Bureaucrat &operator=(const Bureaucrat &bbureaucrat);
};
std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat);


#endif