/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:54:18 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 17:49:50 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){
	std::cout << "Karen has arrived on te premises. Why Karen, why?" << std::endl << std::endl;
	this->_triggers[0].assign("DEBUG");
	this->_triggers[1].assign("INFO");
	this->_triggers[2].assign("WARNING");
	this->_triggers[3].assign("ERROR");
	// this->_whatNow[0] = &Karen::_debug;
	// this->_whatNow[1] = &Karen::_info;
	// this->_whatNow[2] = &Karen::_warning;
	// this->_whatNow[3] = &Karen::_error;
}

Karen::~Karen(void){
	std::cout << "Karen is finally leaving again. Bye Karen, byyyyeeee!!!" << std::endl << std::endl;
	return ;
}

void Karen::setFilter(std::string filter){
	for (int i = 0; i < 4; i++){
		if (!filter.compare(this->_triggers[i])){
			this->_filter = i;
			return ;
		}
	}
	this->_filter = -1;
	return ;
}

void Karen::_debug(void) const{
	std::cout << "[ DEBUG ]" 
	<< std::endl
	<< "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." 
	<< "I really do!\""
	<< std::endl
	<< std::endl;
	return ;
}

void Karen::_info(void) const{
	std::cout << "[ INFO ]" << std::endl
	<< "\"I cannot believe adding extra bacon costs more money." 
	<< std::endl
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" 
	<< std::endl 
	<< std::endl;
	return ;
}

void Karen::_warning(void) const{
	std::cout << "[ WARNING ]" 
	<< std::endl
	<< "\"I think I deserve to have some extra bacon for free." 
	<< std::endl
	<< "I’ve been coming for years whereas you started working here since last month.\"" 
	<< std::endl
	<< std::endl;
	return ;
}

void Karen::_error(void) const{
	std::cout << "[ ERROR ]"
	<< std::endl
	<< "\"This is unacceptable! I want to speak to the manager now.\"" 
	<< std::endl
	<< std::endl;
	return ;
}

int Karen::complainLevel(std::string level){
	for(int i = 0; i < 4; ++i){
		if (!level.compare(this->_triggers[i])){
			if (this->_filter <= i)
				return i;
			else
				return -2;
		}
	}
	return -1;
}

void Karen::complain(std::string level){
	whatNow 	function[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	int realLevel = this->complainLevel(level);
	switch (realLevel){
		case 0 ... 3 :
			(this->*(function[realLevel]))();
			break ;
		case -1 :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break ;
		case -2 :
			std::cout << "Karen filter activated...." << std::endl << std::endl;
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break ;
	}
}
