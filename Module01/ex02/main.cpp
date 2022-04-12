#include <iostream>

int	main(void){
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	std::cout << "Memory address string is: " << &string << std::endl;
	std::cout << "Memory address stringPTR is: " << stringPTR << std::endl;
	std::cout << "Memory address stringREF is: " << &stringREF << std::endl;
	std::cout << "Value string is: " << string << std::endl;
	std::cout << "Value stringPTR is: " << *stringPTR << std::endl;
	std::cout << "Value stringREF is: " << stringREF << std::endl;
}