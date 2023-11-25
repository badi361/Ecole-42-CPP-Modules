#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap baran("baran");
	ScavTrap burak("burak");
	ScavTrap arda(baran);
	baran.attack("olcay");
	burak.attack("baran");

	baran.guardGate();

	baran.takeDamage(2);
	burak.takeDamage(12);
	burak = baran;
	burak.beRepaired(20);
	burak.takeDamage(2);
} 