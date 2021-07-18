#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name ) : _name(name) {
	Weapon* weaponA = new Weapon;
	weaponA->setType("pistol");
	this->_weapon = weaponA;
	std::cout << "HumanA constructor" << std::endl;
}

HumanA::~HumanA( void ){
	delete this->_weapon;
	std::cout << "HumanA destructor" << std::endl;
}

void HumanA::attack( void ){
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
