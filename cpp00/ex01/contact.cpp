#include "contact.hpp"

void	Contact::set_name(std::string name)
{
	Name = name;
}

void	Contact::set_surname(std::string surname)
{
	Surname = surname;
}

void	Contact::set_nickname(std::string nickname)
{
	Nickname = nickname;
}

void	Contact::set_phone_number(long long int phonenumber)
{
	PhoneNumber = phonenumber;
}

void	Contact::set_dark_secret(std::string darksecret)
{
	DarkSecret = darksecret;
}

std::string	Contact::get_name(void)
{
	return(Name);
}

std::string	Contact::get_surname(void)
{
	return(Surname);
}

std::string	Contact::get_nickname(void)
{
	return(Nickname);
}

long long int	Contact::get_phone_number(void)
{
	return(PhoneNumber);
}

std::string	Contact::get_dark_secret(void)
{
	return(DarkSecret);
}

int	Contact::ctrl_phone_number(std::string PhoneNumber)
{
	int	i;

	i = 0;
	while (PhoneNumber[i])
	{
		if (!(PhoneNumber[i] >= '0' && PhoneNumber[i] <= '9'))
		{
			std::cout << "You Entered An Invalid Phone Number" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}
