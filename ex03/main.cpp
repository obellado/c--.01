#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main( void ){
	HumanA A = HumanA("Valera");
	HumanB B = HumanB("Albert");
	Weapon W;
	W.setType("knife");
	B.takeWeapon(&W);
	A.attack();
	B.attack();
	return (0);
}
