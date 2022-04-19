#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &inst){
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
	return ;
}

Fixed & Fixed::operator =(Fixed const &inst){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &inst){
		this->_fixed = inst.getRawBits();
	}
	return *this;
}
