#include "Fixed.hpp"
#define RESET   "\033[0m"
#define GREEN	"\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RED     "\033[31m" 

Fixed::Fixed(void) : _fixed(0){
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &inst){
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	*this = inst;
	return ;
}

Fixed::~Fixed(void){
	std::cout << BLUE << "Destructor called" << RESET << std::endl;
	return ;
}

int Fixed::getRawBits(void) const{
	std::cout << RED << "getRawBits member function called" << RESET << std::endl;
	return this->_fixed;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
	return ;
}

Fixed & Fixed::operator =(Fixed const &inst){
	std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
	if (this != &inst){
		this->_fixed = inst.getRawBits();
	}
	return *this;
}
