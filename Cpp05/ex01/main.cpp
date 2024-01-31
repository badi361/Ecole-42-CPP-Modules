#include "Form.hpp"

int main()
{
    try
	{
		Bureaucrat bureaucrat("baran", 100);
		Form form("form1", 111, 144);
		std::cout << bureaucrat;
		//std::cout << form;
		bureaucrat.signForm(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}