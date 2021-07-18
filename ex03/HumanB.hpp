#ifndef __HUMANB_H__
# define __HUMANB_H__
# include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB( std::string name );
		void takeWeapon( Weapon* weapon );
		~HumanB( void );
		void attack( void );
};

#endif
