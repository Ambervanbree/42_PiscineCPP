/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:59:32 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 11:54:04 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) : _type("unset"){
	std::cout << GREEN << "Default constructor AAnimal called" << RESET << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &inst){
	std::cout << GREEN << "Copy constructor AAnimal called" << RESET << std::endl;
	*this = inst;
	return ;
}

AAnimal::~AAnimal(void){
	std::cout << GREEN << "Default destructor AAnimal called" << RESET << std::endl;
	return ;
}

AAnimal & AAnimal::operator =(AAnimal const &inst){
	std::cout << GREEN << "Assignment operator AAnimal called" << RESET << std::endl;
	this->_type = inst.getType();
	return *this;
}

std::string	AAnimal::getType(void) const{
	return this->_type;
}
