#include "Bureaucrat.hpp"

int main()
{
    // try
	// {
	// 	Bureaucrat b("baran", 155);
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
    try
	{
		Bureaucrat b("baran", 10);
        b.increment(8);
        std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}