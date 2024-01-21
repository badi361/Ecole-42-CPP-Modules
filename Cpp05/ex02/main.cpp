#include "AForm.hpp"

int main()
{
    try
	{
		Bureaucrat bureaucrat("baran", 100);
		AForm aform("Aform1", true, 111, 144);
		std::cout << bureaucrat;
		//std::cout << Aform;
		bureaucrat.signForm(aform);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}