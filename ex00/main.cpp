#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	first = Zombie("Yoyo");
	Zombie*	second = newZombie("Jojo");
	randomChump("Tutu");

	first.announce();
	second->announce();

	delete second;
	return (0);
}
