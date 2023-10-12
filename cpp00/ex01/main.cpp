#include "phonebook.hpp"

int main(void)
{
    Phonebook	phonebook;
    std::string	command;
	int			id;

	id = 1;
    while (1)
    {
        std::cout << "Please Enter Command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			Contact 	Contact;
			std::string name;
			std::string surname;
			std::string nickname;
			std::string PhoneNumber;
			std::string DarkSecret;

			std::cout << "Please Enter The Person's Name: ";
			std::getline(std::cin, name);
			if (name == "")
			{
				std::cout << "You Did Not Enter The Name !" << std::endl;
				continue;
			}
			Contact.set_name(name);
			std::cout << "Please Enter The Person's Surname: ";
			std::getline(std::cin, surname);
			if (surname == "")
			{
				std::cout << "You Did Not Enter The Surname !" << std::endl;
				continue;
			}
			Contact.set_surname(surname);
			std::cout << "Please Enter The Person's Nickname: ";
			std::getline(std::cin, nickname);
			if (nickname == "")
			{
				std::cout << "You Did Not Enter The Nickname !" << std::endl;
				continue;
			}
			Contact.set_nickname(nickname);
			std::cout << "Please Enter The Person's Phone Number: ";
			std::getline(std::cin, PhoneNumber);
			if (PhoneNumber == "")
			{
				std::cout << "You Did Not Enter The Phone Number !" << std::endl;
				continue;
			}
			else
			{
				if (Contact.ctrl_phone_number(PhoneNumber))
					continue;
				else
					Contact.set_phone_number(std::stoi(PhoneNumber));
			}
			std::cout << "Please Enter The Person's Dark Secret: ";
			std::getline(std::cin, DarkSecret);
			if (DarkSecret == "")
			{
				std::cout << "You Did Not Enter The Dark Secret !" << std::endl;
				continue;
			}
			Contact.set_dark_secret(DarkSecret);
			id++;
			phonebook.get_contact(Contact, id);
		}
		else if (command == "SEARCH")
		{
			continue;
		}
		else if (command == "EXIT")
			return (0);
		else
			continue;
    }
	return (0);
}