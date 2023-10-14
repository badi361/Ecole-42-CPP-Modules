#include "phonebook.hpp"

void	Phonebook::get_contact(Contact contact, int id)
{
	this->directorys[id - 1] = contact;
}

void	Phonebook::print_arguments(void)
{
	std::cout << "|___________________________________________|" << std::endl;
	std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|"<< std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	Phonebook::print_phonebook(int id, int index)
{
	int						i;
	int 					size;
	std::string				command;
	long long int			result;

	i = 0;
	if (index > 8)
		index = 8;
	while (i < index)
	{
		size = 0;
		std::cout << "|         " << i + 1;
		size = this->directorys[i].get_name().length();
		std::cout << "|";
		if (size < 10)
		{
			while (10 - size > 0)
			{
				std::cout << " ";
				size++;
			}
			std::cout << this->directorys[i].get_name();
		}
		else
			char_writer(this->directorys[i].get_name());
		std::cout << "|";
		size = this->directorys[i].get_surname().length();
		if (size < 10)
		{
			while (10 - size > 0)
			{
				std::cout << " ";
				size++;
			}
			std::cout << this->directorys[i].get_surname();
		}
		else
			char_writer(this->directorys[i].get_surname());	
		std::cout << "|";
		size = this->directorys[i].get_nickname().length();
		if (size < 10)
		{
			while (10 - size > 0)
			{
				std::cout << " ";
				size++;
			}
			std::cout << this->directorys[i].get_nickname();
		}
		else
			char_writer(this->directorys[i].get_nickname());	
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|"<< std::endl;
		i++;
		}
		Command:
		std::cout << "Please Enter The Person ID: ";
		std::getline(std::cin, command);
		i = 0;
		while (command[i])
		{
			if (isdigit(command[i]) == false)
			{
				std::cout << "ID Must Be A Number" << std::endl;
				goto Command;
			}
			i++;
		}
		result = std::stoll(command);
		if (result > id || result < 1)
		{
			std::cout << "There Is No User With This ID" << std::endl;
			goto Command;
		}
		std::cout << "Name: ";
		std::cout << this->directorys[result - 1].get_name() << std::endl;
		std::cout << "Surname: ";
		std::cout << this->directorys[result - 1].get_surname() << std::endl;
		std::cout << "Nickname: ";
		std::cout << this->directorys[result - 1].get_nickname() << std::endl;
		std::cout << "Phone Number: ";
		std::cout << this->directorys[result - 1].get_phone_number() << std::endl;
		std::cout << "Dark Secret: ";
		std::cout << this->directorys[result - 1].get_dark_secret() << std::endl;
 }

 void	Phonebook::char_writer(std::string argument)
 {
	int	i;

	i = 0;
	while (i < 9)
	{
		std::cout << argument[i];
		i++;
	}
	std::cout << ".";
 }

 int	Phonebook::arg_ctrl(std::string argument)
 {
	int	i;

	i = 0;
	while (argument[i])
	{
		if ((argument[i] >= 65 && argument[i] <= 90) || (argument[i] >= 97 && argument[i] <= 122))
			i++;
		else
		{
			std::cout << "Contact Information Must Consist Of Characters" << std::endl;
			return (1);
		}
	}
	return (0);
 }