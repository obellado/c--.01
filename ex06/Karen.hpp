#ifndef __KAREN_H__
# define __KAREN_H__

class Karen {
	public:

		Karen( void );
		~Karen( void );

		void complain( std::string level );


	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif
