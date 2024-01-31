#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	//************case1************
	// try
	// {
	// 	Bureaucrat baran("baran", 26);
	// 	ShrubberyCreationForm sc("form1");
	// 	baran.signForm(sc);
	// 	baran.executeForm(sc);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	//************case2************
	try
	{
		Bureaucrat olcay("olcay", 22);
		PresidentialPardonForm pp("form2");
		olcay.signForm(pp);
		olcay.executeForm(pp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}