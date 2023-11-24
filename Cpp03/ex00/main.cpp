#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap baran("baran");
	ClapTrap olcay("olcay");
	ClapTrap burak(baran);

	baran.attack("olcay");
	burak.attack("burak");

	baran.takeDamage(2);
	olcay.takeDamage(4);
	burak.takeDamage(8);
	burak.takeDamage(12);
	burak.takeDamage(12);
	burak.beRepaired(20);
	burak.takeDamage(2);
}