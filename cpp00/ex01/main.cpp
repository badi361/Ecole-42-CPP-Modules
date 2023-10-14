#include "phonebook.hpp"

int main(void)
{
    Phonebook	phonebook;
    std::string	command;
	int			id;
	int			index;

	index = 0;
	id = 0;
    while (1)
    {
        std::cout << "Please Enter Command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			Contact 	contact;
			std::string name;
			std::string surname;
			std::string nickname;
			std::string PhoneNumber;
			std::string DarkSecret;
			if (id == 8)
				id = 0;
			name:
			std::cout << "Please Enter The Person's Name: ";
			std::getline(std::cin, name);
			if (name == "")
			{
				std::cout << "You Did Not Enter The Name !" << std::endl;
				goto name;
			}
			else
			{
				if (phonebook.arg_ctrl(name))
					goto name;
			}
			contact.set_name(name);
			surname:
			std::cout << "Please Enter The Person's Surname: ";
			std::getline(std::cin, surname);
			if (surname == "")
			{
				std::cout << "You Did Not Enter The Surname !" << std::endl;
				goto surname;
			}
			else
			{
				if (phonebook.arg_ctrl(surname))
					goto surname;
			}
			contact.set_surname(surname);
			Nickname:
			std::cout << "Please Enter The Person's Nickname: ";
			std::getline(std::cin, nickname);
			if (nickname == "")
			{
				std::cout << "You Did Not Enter The Nickname !" << std::endl;
				goto Nickname;
			}
			else
			{
				if (phonebook.arg_ctrl(nickname))
					goto Nickname;
			}
			contact.set_nickname(nickname);
			phonenumber:
			std::cout << "Please Enter The Person's Phone Number: ";
			std::getline(std::cin, PhoneNumber);
			if (PhoneNumber == "")
			{
				std::cout << "You Did Not Enter The Phone Number !" << std::endl;
				goto phonenumber;
			}
			else
			{
				if (contact.ctrl_phone_number(PhoneNumber))
					goto phonenumber;
				else
					contact.set_phone_number(std::stoll(PhoneNumber));
			}
			darksecret:
			std::cout << "Please Enter The Person's Dark Secret: ";
			std::getline(std::cin, DarkSecret);
			if (DarkSecret == "")
			{
				std::cout << "You Did Not Enter The Dark Secret !" << std::endl;
				goto darksecret;
			}
			else
			{
				if (phonebook.arg_ctrl(DarkSecret))
					goto darksecret;
			}
			contact.set_dark_secret(DarkSecret);
			id++;
			index++;
			phonebook.get_contact(contact, id);
		}
		else if (command == "SEARCH")
		{
			phonebook.print_arguments();
			if (id == 0)
			{
				std::cout << "|----------|----------|----------|----------|"<< std::endl;
				std::cout << "Please Enter The Person ID: ";
				std::getline(std::cin, command);
				std::cout << "There Is No One In The Phonebook" << std::endl;
				continue;
			}
			else if (id > 0)
				phonebook.print_phonebook(id, index);
		}
		else if (command == "EXIT")
			return (0);
		else
		{
			std::cout << "Wrong Command. Please Try Again" << std::endl;
			continue;
		}
    }

	return (0);
}