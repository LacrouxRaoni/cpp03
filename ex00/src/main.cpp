#include "ClapTrap.hpp"

int main(void){
	ClapTrap clapTrap("type CL4P-TP");

	clapTrap.attack("Marvin");
	clapTrap.takeDamage(10);
  	clapTrap.beRepaired(5);

	std::cout << "Name: " << clapTrap.getName() << std::endl;
	std::cout << "Energy Points: " << clapTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Points: " << clapTrap.getHitPoint() << std::endl;
}