/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 11:49:41 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
	std::cout << MAGENTA << "Default constructor Dog called" << RESET << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog &inst) : Animal(){
	std::cout << MAGENTA << "Copy constructor Dog called" << RESET << std::endl;
	this->_type = "Dog";
	*this = inst;
	return ;
}

Dog::~Dog(void){
	std::cout << MAGENTA << "Default destructor Dog called" << RESET << std::endl;
	return ;
}

void Dog::makeSound(void) const{
	std::cout << "Woef Woef" << std::endl;
	return ;	
}
