/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:33:25 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 11:24:15 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Damage = 30;
	std::cout << YELLOW << "Default FragTrap initialised" << RESET << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Damage = 30;
	std::cout << YELLOW << "FragTrap " << this->_Name << " initialised" << RESET << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &inst){
	std::cout << YELLOW << "FragTrap " << this->_Name << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << YELLOW << "FragTrap " << this->_Name << " destroyed" << RESET << std::endl;
	return ;
}

void FragTrap::status(void) const{
	std::cout << bold_on << "STATUS: " << bold_off << "FragTrap "
	<< this->_Name << " has " <<
	this->_Hit << " hit points, " <<
	this->_Energy << " energy points, and " <<
	this->_Damage << " damage points." << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << BLUE << "* Question ! Do you want a high five from " 
	<< this->_Name << "? YES or NO?" << RESET << std::endl;

	std::string	input;
	std::cin >> input;
	if (!input.compare("YES")){
		std::cout << bold_on << "Highfiiiiiiive!!     ???( ^o^)??????(^_^ )" << bold_off << std::endl;
	}
	else if(!input.compare("NO")){
		std::cout << bold_on << "Sadness overload... (???????????????????)" << bold_off << std::endl;
	}
	else{
		std::cout << bold_on << "Didn't understand! ???( ????? ???? ????? ) ???" << bold_off << std::endl;
	}
}
