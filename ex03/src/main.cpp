#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap diamondTrap("Diamond");

	while (diamondTrap.getEnergyPoint() > 1)
		diamondTrap.attack("CL4P-TP");
	diamondTrap.takeDamage(20);
	diamondTrap.beRepaired(5);
	diamondTrap.beRepaired(5);
	diamondTrap.whoAmI();
	std::cout << "\n\n\n";
	std::cout << "Name: " << diamondTrap.getName() << std::endl;
	std::cout << "Energy: " << diamondTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Point: " << diamondTrap.getHitPoint() << std::endl;
	std::cout << "Attack Damage: " << diamondTrap.getAttackDamage() << std::endl;
	

}