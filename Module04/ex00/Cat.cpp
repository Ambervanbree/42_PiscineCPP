/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:58:39 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	std::cout << CYAN << "Default constructor Cat called" << RESET << std::endl;
	this->_type = "Cat";
	this->_sound = "Miauw";
	return ;
}

Cat::Cat(const Cat &inst) : Animal(){
	std::cout << CYAN << "Copy constructor Cat called" << RESET << std::endl;
	this->_type = "Cat";
	this->_sound = "Miauw";
	*this = inst;
	return ;
}

Cat::~Cat(void){
	std::cout << CYAN << "Default destructor Cat called" << RESET << std::endl;
	return ;
}
