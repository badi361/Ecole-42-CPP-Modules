#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &source);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& source);
		std::string	getTarget() const;
		void execute(Bureaucrat const & executor) const;
		class IsNotException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& source);

#endif