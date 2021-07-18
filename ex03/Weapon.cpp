#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon( void ){
	std::cout << "Weapon constructor" << std::endl;
}

Weapon::~Weapon( void ){
	std::cout << "Weapon destructor" << std::endl;
}

std::string const & Weapon::getType( void ) {
	return (this->_type);
}

void Weapon::setType( std::string type ) {
	this->_type = type;
	return ;
}
