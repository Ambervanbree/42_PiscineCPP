/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:09:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 09:12:04 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Default Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &inst){
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = inst;
	return ;
}

virtual Brain::~Brain(void){
	std::cout << "Default Brain destructor called" << std::endl;
	return ;
}

Brain & Brain::operator =(Brain const &inst){
	std::cout << "Brain assignment operator called" << std::endl;
	this->_type = inst.getType();
	return *this;
}
