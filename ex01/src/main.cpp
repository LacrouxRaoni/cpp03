#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap scavTrap("SC4V-TP");

	scavTrap.attack("CL4P-TP");
	scavTrap.guardGate();
}