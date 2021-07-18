#include <iostream>
#include <string>
#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie one = Zombie(name);
	one.announce();
}
