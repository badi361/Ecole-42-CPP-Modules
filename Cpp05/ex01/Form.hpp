#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int to_sign_grade;
        const int to_execute_grade;
    public:
        Form();
        ~Form();
        Form(std::string name, int to_sign_grade, int to_execute_grade);
        Form(const Form &cpy);
        Form& operator=(const Form& cpy);
        std::string get_name() const;
        int get_sign_grade() const;
        int get_exec_grade() const;
        bool get_sign() const;
        void beSigned(const Bureaucrat& bureaucrat);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class AlreadySignedException : public std::exception
        {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);
#endif