/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 09:15:26 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void){
	std::cout << "Default constructor wrong Cat called" << std::endl;
	this->_type = "wrongCat";
	this->_sound = "Kukelekuuuuu";
	return ;
}

wrongCat::wrongCat(const wrongCat &inst){
	std::cout << "Copy constructor wrong Cat called" << std::endl;
	*this = inst;
	return ;
}

wrongCat::~wrongCat(void){
	std::cout << "Default destructor wrong Cat called" << std::endl;
	return ;
}
