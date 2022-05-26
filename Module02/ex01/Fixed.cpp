/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:43:07 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 14:43:08 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(int n){
	std::cout << RED << "Int constructor called" << RESET << std::endl;
	this->_fixed = n << _fract;
	return ;
}

Fixed::Fixed(const float fp){
	std::cout << RED << "Float constructor called" << RESET << std::endl;
	this->_fixed = roundf(fp * 256);
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

Fixed & Fixed::operator =(Fixed const &inst){
	std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
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
