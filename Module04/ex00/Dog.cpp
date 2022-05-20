/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:59:11 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
	std::cout << MAGENTA << "Default constructor Dog called" << RESET << std::endl;
	this->_type = "Dog";
	this->_sound = "Woef Woef";
	return ;
}

Dog::Dog(const Dog &inst) : Animal(){
	std::cout << MAGENTA << "Copy constructor Dog called" << RESET << std::endl;
	this->_type = "Dog";
	this->_sound = "Woef Woef";
	*this = inst;
	return ;
}

Dog::~Dog(void){
	std::cout << MAGENTA << "Default destructor Dog called" << RESET << std::endl;
	return ;
}

