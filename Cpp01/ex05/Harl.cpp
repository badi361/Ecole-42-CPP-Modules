#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "DEBUG-> " << "7XL double cheese, triple pickle, special sauce burger with extra pork pastrami is something I really enjoy! I truly love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO-> " << "I can't believe adding extra pork pastrami costs more money. You didn't put enough pastrami in my burger! If you had, I wouldn't have asked for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING-> " << "I believe I deserve to have extra pastrami for free. I've been coming here for years, and you just started working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR-> " << "This is unacceptable! I want to speak to the manager right now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl:: error};
	for (int i = 0; i <= 4; i++)
	{
		if (level == command[i])
		{
			(this->*funcs[i]) ();
			break ;
		}
		if (i == 4)
		{
			std::cout << "Wrong Command" << std::endl;
		}
	}
}
