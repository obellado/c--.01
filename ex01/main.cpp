#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	int n = 7;
	Zombie*	zombies = zombieHorde(n, "default");
	int i = -1;
	while (++i < n)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
