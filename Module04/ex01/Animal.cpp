/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:59:32 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 16:10:03 by avan-bre         ###   ########.fr       */
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
	return *this;
}

std::string	Animal::getType(void) const{
	return this->_type;
}

void Animal::makeSound(void) const{
	std::cout << this->_sound << std::endl;
	return ;
}
