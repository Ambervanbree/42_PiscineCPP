/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 09:14:30 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->_sound = "Miauw";
	return ;
}

Cat::Cat(const Cat &inst){
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = inst;
	return ;
}

Cat::~Cat(void){
	std::cout << "Default destructor Cat called" << std::endl;
	return ;
}
