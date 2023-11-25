#include "FragTrap.hpp"

int main(void)
{
	FragTrap baran("baran");
	FragTrap burak("burak");
	FragTrap arda(baran);
	baran.attack("olcay");
	burak.attack("baran");

	baran.highFivesGuys();

	baran.takeDamage(2);
	burak.takeDamage(12);
	burak = baran;
	burak.beRepaired(20);
	burak.takeDamage(2);
} 