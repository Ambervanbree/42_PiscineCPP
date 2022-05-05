/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:54:18 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 17:49:50 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	this->_triggers[0].assign("DEBUG");
	this->_triggers[1].assign("INFO");
	this->_triggers[2].assign("WARNING");
	this->_triggers[3].assign("ERROR");
}

Harl::~Harl(void){
}

void Harl::setFilter(std::string filter){
	for (int i = 0; i < 4; i++){
		if (!filter.compare(this->_triggers[i])){
			this->_filter = i;
			return ;
		}
	}
	this->_filter = -1;
	return ;
}

void Harl::_debug(void) const{
	std::cout << "[ DEBUG ]\n"
	"\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
	"I really do!\"\n" << std::endl;
}

void Harl::_info(void) const{
	std::cout << "[ INFO ]\n"
	"\"I cannot believe adding extra bacon costs more money.\n"
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"\n" << std::endl;
}

void Harl::_warning(void) const{
	std::cout << "[ WARNING ]\n"
	"\"I think I deserve to have some extra bacon for free.\n"
	"I’ve been coming for years whereas you started working here since last month.\"\n" << std::endl;
}

void Harl::_error(void) const{
	std::cout << "[ ERROR ]\n"
	"\"This is unacceptable! I want to speak to the manager now.\"\n" << std::endl;
}

int Harl::complainLevel(std::string level){
	if (this->_filter == -1){
		return -1;
	}
	else{
		for(int i = 0; i < 4; ++i){
			if (!level.compare(this->_triggers[i])){
				if (this->_filter <= i)
					return i;
			}
		}
	}
	return -2;
}

bool Harl::complain(std::string level){
	whatNow 	function[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int realLevel = this->complainLevel(level);

	switch (realLevel){
		case 0 ... 3 :
			(this->*(function[realLevel]))();
			return true;
		case -1 :
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			return false;
		case -2 :
			return true;
		default :
			return true;
	}
}

/// note to self: als _level == -1, moet complainLevel -2 returnen denk ik