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

};
#endif