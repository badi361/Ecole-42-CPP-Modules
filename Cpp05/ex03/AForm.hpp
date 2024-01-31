#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool is_signed;
        const int to_sign_grade;
        const int to_execute_grade;
    public:
        AForm();
        virtual ~AForm();
        AForm(std::string name, int to_sign_grade, int to_execute_grade);
        AForm(const AForm &cpy);
        AForm& operator=(const AForm& cpy);
        std::string get_name() const;
        int get_sign_grade() const;
        int get_exec_grade() const;
        bool get_sign() const;
        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
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

std::ostream& operator<<(std::ostream& os, const AForm& Aform);
#endif