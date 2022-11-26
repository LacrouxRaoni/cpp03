#include "FragTrap.hpp"

int main(void){
	FragTrap fragTrap("robot");

	while (fragTrap.getEnergyPoint() > 1)
		fragTrap.attack("CL4P-TP");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	fragTrap.beRepaired(5);
	std::cout << "\n\n\n";
	std::cout << "Name: " << fragTrap.getName() << std::endl;
	std::cout << "Energy: " << fragTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Point: " << fragTrap.getHitPoint() << std::endl;
	std::cout << "Attack Damage: " << fragTrap.getAttackDamage() << std::endl;
}