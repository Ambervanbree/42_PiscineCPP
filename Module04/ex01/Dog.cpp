/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/17 12:23:55 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->_sound = "Woef Woef";
	return ;
}

Dog::Dog(const Dog &inst){
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = inst;
	return ;
}

Dog::~Dog(void){
	std::cout << "Default destructor Dog called" << std::endl;
	return ;
}

Dog & Dog::operator =(Dog const &inst){
	std::cout << "Assignment operator Dog called" << std::endl;
	this->_type = inst.getType();
	return *this;
}
