#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include "contact.hpp"

class	Phonebook
{
	private:
		Contact directorys[8];
	public:
		Phonebook()
		{
			for (int i = 0; i < 8; i++)
			{
				this->directorys[i] = Contact();
			}
		}
		void	get_contact(Contact contact, int id);
		void	print_arguments(void);
		void	print_phonebook(int id, int index);
		void	char_writer(std::string argument);
 		int		arg_ctrl(std::string argument);

};
#endif