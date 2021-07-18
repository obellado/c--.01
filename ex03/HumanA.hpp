#ifndef __HUMANA_H__
# define __HUMANA_H__
# include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanA( std::string name );
		~HumanA( void );
		void attack( void );
};

#endif
