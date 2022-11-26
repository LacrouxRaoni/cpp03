#include "ScavTrap.hpp"

int main(void){
	ScavTrap scavTrap("SC4V-TP");
	while (scavTrap.getEnergyPoint() > 1)
		scavTrap.attack("CL4P-TP");
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	scavTrap.beRepaired(5);
	std::cout << "\n\n\n";
	std::cout << "Name: " << scavTrap.getName() << std::endl;
	std::cout << "Energy: " << scavTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Point: " << scavTrap.getHitPoint() << std::endl;
	std::cout << "Attack Damage: " << scavTrap.getAttackDamage() << std::endl;
}