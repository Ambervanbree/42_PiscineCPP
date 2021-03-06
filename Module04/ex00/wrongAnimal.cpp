/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongwrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:59:32 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/17 12:34:40 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(void) : _type("wrong animal"){
	std::cout << YELLOW << "Default constructor wrong Animal called" << RESET << std::endl;
	return ;
}

wrongAnimal::wrongAnimal(const wrongAnimal &inst){
	std::cout << YELLOW << "Copy constructor Wrong wrong Animal called" << RESET << std::endl;
	*this = inst;
	return ;
}

wrongAnimal::~wrongAnimal(void){
	std::cout << YELLOW << "Default destructor wrong Animal called" << RESET << std::endl;
	return ;
}

wrongAnimal & wrongAnimal::operator =(wrongAnimal const &inst){
	std::cout << YELLOW << "Assignment operator wrong Animal called" << RESET << std::endl;
	this->_type = inst.getType();
	return *this;
}

std::string	wrongAnimal::getType(void) const{
	return this->_type;
}

void wrongAnimal::makeSound(void) const{
	std::cout << "**wrongAnimal sound**" << std::endl;
	return ;
}
