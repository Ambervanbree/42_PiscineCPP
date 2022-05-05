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

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

Harl::Harl(void){
	std::cout << bold_on << "Harl has arrived on te premises. Why Harl, why?\n" << bold_off << std::endl;
}

Harl::~Harl(void){
	std::cout << bold_on << "Harl is finally leaving again. Bye Harl, byyyyeeee!!!"<< bold_off << std::endl;
}

void Harl::_debug(void) const{
	std::cout << "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
	"I really do!\"\n" << std::endl;
}

void Harl::_info(void) const{
	std::cout << "\"I cannot believe adding extra bacon costs more money.\n"
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"\n" << std::endl;
}

void Harl::_warning(void) const{
	std::cout << "\"I think I deserve to have some extra bacon for free.\n"
	"I’ve been coming for years whereas you started working here since last month.\"\n" << std::endl;
}

void Harl::_error(void) const{
	std::cout << "\"This is unacceptable! I want to speak to the manager now.\"\n" << std::endl;
}

void Harl::complain(std::string level){
	whatNow 	function[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	triggers[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; ++i){
		if (!level.compare(triggers[i])){
			std::cout << "He says: \n";
			(this->*(function[i]))();
		}
	}
}