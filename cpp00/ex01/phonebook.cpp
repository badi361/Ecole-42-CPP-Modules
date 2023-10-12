#include "phonebook.hpp"

void	Phonebook::get_contact(Contact contact, int id)
{
	this->directorys[id - 1] = contact;
}