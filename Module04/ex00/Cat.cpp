/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 11:49:36 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	std::cout << CYAN << "Default constructor Cat called" << RESET << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &inst) : Animal(){
	std::cout << CYAN << "Copy constructor Cat called" << RESET << std::endl;
	this->_type = "Cat";
	*this = inst;
	return ;
}

Cat::~Cat(void){
	std::cout << CYAN << "Default destructor Cat called" << RESET << std::endl;
	return ;
}

void Cat::makeSound(void) const{
	std::cout << "Miauw" << std::endl;
	return ;	
}
