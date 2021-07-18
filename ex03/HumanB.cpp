#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	std::cout << "HumanB constructor" << std::endl;
}

HumanB::~HumanB( void ){
	std::cout << "HumanB destructor" << std::endl;
}

void HumanB::takeWeapon( Weapon* weapon ) {
	this->_weapon = weapon;
}

void HumanB::attack( void ){
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
