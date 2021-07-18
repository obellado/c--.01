#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ){
	if (N < 0)
		return (NULL);
	Zombie* zombies = new Zombie[N];
	int	i = -1;
	while (++i < N)
		zombies[i].setName(name);
	return (zombies);
}
