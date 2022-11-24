#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& clapTrap);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap& clapTrap);
		std::string getName();
		unsigned int getHitPoint();
		unsigned int getEnergyPoint();
		unsigned int getAttackDamage();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif