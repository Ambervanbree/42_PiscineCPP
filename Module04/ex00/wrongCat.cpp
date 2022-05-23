/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 11:44:47 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void){
	std::cout << YELLOW << "Default constructor wrong Cat called" << RESET << std::endl;
	this->_type = "wrongCat";
	this->_sound = "Kukelekuuuuu";
	return ;
}

wrongCat::wrongCat(const wrongCat &inst){
	std::cout << YELLOW << "Copy constructor wrong Cat called" << RESET << std::endl;
	this->_type = "wrongCat";
	this->_sound = "Kukelekuuuuu";
	*this = inst;
	return ;
}

wrongCat::~wrongCat(void){
	std::cout << YELLOW << "Default destructor wrong Cat called" << RESET << std::endl;
	return ;
}

void wrongCat::makeSound(void) const{
	std::cout << this->_sound << std::endl;
	return ;	
}
