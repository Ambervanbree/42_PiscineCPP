/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:59:32 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:57:57 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("unset"), _sound("..."){
	std::cout << GREEN << "Default constructor Animal called" << RESET << std::endl;
	return ;
}

Animal::Animal(const Animal &inst){
	std::cout << GREEN << "Copy constructor Animal called" << RESET << std::endl;
	*this = inst;
	return ;
}

Animal::~Animal(void){
	std::cout << GREEN << "Default destructor Animal called" << RESET << std::endl;
	return ;
}

Animal & Animal::operator =(Animal const &inst){
	std::cout << GREEN << "Assignment operator Animal called" << RESET << std::endl;
	this->_type = inst.getType();
	this->_sound = inst.getSound();
	return *this;
}

std::string	Animal::getType(void) const{
	return this->_type;
}

std::string	Animal::getSound(void) const{
	return this->_sound;
}

void Animal::makeSound(void) const{
	std::cout << this->_sound << std::endl;
	return ;
}
