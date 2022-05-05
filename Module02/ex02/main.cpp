#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// extra tests
	// Fixed c(10);
	// Fixed d(3);
	
	// std::cout << "10 - 3 = " << c - d << std::endl;
	// std::cout << "10 + 3 = " << c + d << std::endl;
	// std::cout << "10 / 3 = " << c / d << std::endl;
	// std::cout << "10 * 3 = " << c * d << std::endl;
	// if (d < c){
	// 	std::cout << "3 is smaller than 10" << std::endl;
	// }
	// if (c > d){
	// 	std::cout << "10 is bigger than 3" << std::endl;
	// }

	return 0;
}