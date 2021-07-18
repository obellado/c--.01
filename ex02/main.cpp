#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::cout << "Address of the string is " << &str << " using the string" << std::endl;
	std::string* stringPTR = &str;
	std::cout << "Address of the string is " << stringPTR << " using the pointer" << std::endl;
	std::string& stringREF = str;
	std::cout << "Address of the string is " << &stringREF << " using the reference" << std::endl;

	std::cout << std::endl << "String, displayed by pointer: " << *stringPTR << std::endl;
	std::cout << std::endl << "String, displayed by reference: " << stringREF << std::endl;

	return (0);
}
