#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	 ClapTrap
{
	protected:
		unsigned int	hit_points;
		unsigned int	energy_points;
		unsigned int	attack_damage;
		std::string		name;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& cpy);
		ClapTrap& operator=(const ClapTrap& cpy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif