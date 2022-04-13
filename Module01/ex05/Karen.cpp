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
	std::cout << "Karen has arrived on te premises. Why Karen, why?" << std::endl;
}

Karen::~Karen(void){
	std::cout << "Karen is finally leaving again. Bye Karen, byyyyeeee!!!" << std::endl;
}

void Karen::_debug(void) const{
	std::cout << "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Karen::_info(void) const{
	std::cout << "\"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;
}

void Karen::_warning(void) const{
	std::cout << "\"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;
}

void Karen::_error(void) const{
	std::cout << "\"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Karen::complain(std::string level){
	whatNow 	function[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	std::string	triggers[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; ++i){
		if (!level.compare(triggers[i])){
			std::cout << "She says: ";
			(this->*(function[i]))();
		}
	}
}