/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 14:13:28 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void){
	std::cout << YELLOW << "Default constructor wrong Cat called" << RESET << std::endl;
	this->_type = "wrongCat";
	return ;
}

wrongCat::wrongCat(const wrongCat &inst){
	std::cout << YELLOW << "Copy constructor wrong Cat called" << RESET << std::endl;
	this->_type = "wrongCat";
	*this = inst;
	return ;
}

wrongCat::~wrongCat(void){
	std::cout << YELLOW << "Default destructor wrong Cat called" << RESET << std::endl;
	return ;
}

void wrongCat::makeSound(void) const{
	std::cout << "wrongCat sound" << std::endl;
	return ;	
}
