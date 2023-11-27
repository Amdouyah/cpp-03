#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
	std::cout << "ScavTrap Constructor called "<< std::endl; 
	this->HItPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDammage = 20;
}
void ScavTrap::guardGate()
{
	std::cout <<"ScavTrap is now in Gate keeper mode "<<std::endl;
}

ScavTrap::~ScavTrap(){
}

