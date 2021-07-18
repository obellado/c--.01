#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ){
	this->_name = name;
	std::cout << "Zombie " << this->_name << " was born" << std::endl;
}

void Zombie::announce( void ){
	std::cout << Zombie::_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie " << Zombie::_name << " died" << std::endl;
}
