#include <iostream>
#include <string>
#include "Karen.hpp"

int	main( int argc, char **argv ){
	Karen Anna;
	std::string s;
	switch (argc) {
		case 2:
			s = argv[1];
			Anna.complain(s);
			break ;
		default:
        	std::cout << "Error: wrong number of arguments" << std::endl;
        break;
	}
	return (0);
}
