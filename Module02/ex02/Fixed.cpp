#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixed(0){
	return ;
}

Fixed::Fixed(int n){
	this->_fixed = n << _fract;
	return ;	
}

Fixed::Fixed(const float fp){
	this->_fixed = roundf(fp * (1 << _fract));
	return ;
}

Fixed::Fixed(const Fixed &inst){
	*this = inst;
	return ;
}

Fixed::~Fixed(void){
	return ;
}

Fixed & Fixed::operator =(Fixed const &inst){
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

bool Fixed::operator <(Fixed const & rhs){
	if(this->_fixed < rhs._fixed)
		return true;
	return false;
}

bool Fixed::operator >(Fixed const & rhs){
	if (this->_fixed > rhs._fixed)
		return true;
	return false;
}

bool Fixed::operator >=(Fixed const & rhs){
	if (this->_fixed >= rhs._fixed)
		return true;
	return false;
}

bool Fixed::operator <=(Fixed const & rhs){
	if (this->_fixed <= rhs._fixed)
		return true;
	return false;	
}

bool Fixed::operator !=(Fixed const & rhs){
	if (this->_fixed != rhs._fixed)
		return true;
	return false;	
}

bool Fixed::operator ==(Fixed const & rhs){
	if (this->_fixed == rhs._fixed)
		return true;
	return false;	
}

Fixed Fixed::operator -(Fixed const & rhs){
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator +(Fixed const & rhs) const{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator *(Fixed const & rhs) const{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator /(Fixed const & rhs){
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator ++(void){
	this->_fixed = ++_fixed;
	return *this;
}

Fixed Fixed::operator ++(int n){
	Fixed temp(*this);
	(void)n;
	this->_fixed++;
	return temp;
}

Fixed & Fixed::operator --(void){
	this->_fixed = --_fixed;
	return *this;
}

Fixed Fixed::operator --(int n){
	Fixed temp(*this);
	(void)n;
	this->_fixed--;
	return temp;
}

Fixed & Fixed::min(Fixed &one, Fixed &two){
	if (one <= two)
		return one;
	return two;
}

Fixed Fixed::min(Fixed const &one, Fixed const &two){
	if (one._fixed <= two._fixed)
		return Fixed(one);
	return Fixed(two);
}

Fixed & Fixed::max(Fixed &one, Fixed &two){
	if (one >= two)
		return one;
	return two;
}

Fixed Fixed::max(Fixed const &one, Fixed const &two){
	if (one._fixed >= two._fixed)
		return Fixed(one);
	return Fixed(two);
}

std::ostream &	operator <<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return o;
}
