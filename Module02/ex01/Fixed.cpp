#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixed(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int n){
	std::cout << "Initialising int constructor called" << std::endl;
	this->_fixed = n << _fract;
	return ;	
}

Fixed::Fixed(const float fp){
	std::cout << "Initialising float constructor called" << std::endl;
	this->_fixed = roundf(fp * (1 << _fract));
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

Fixed & Fixed::operator =(Fixed const &inst){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &inst){
		this->_fixed = inst.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const{
	return this->_fixed;
}

void Fixed::setRawBits(int const raw){
	this->_fixed = raw;
	return ;
}

float Fixed::toFloat(void) const{
	return ((float)this->_fixed / (1 << _fract));
}

int Fixed::toInt(void) const{
	return (this->_fixed / (1 << _fract));
}

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return o;
}
