#ifndef __WEAPON_H__
# define __WEAPON_H__

class Weapon {
	private:
		std::string	_type;

	public:
		std::string const &		getType( void );
		void					setType( std::string type );
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
};

#endif
