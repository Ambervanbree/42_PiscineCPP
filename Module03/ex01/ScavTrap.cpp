/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:51 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 11:23:59 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Damage = 20;
	std::cout << GREEN << "Default ScavTrap initialised" << RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Damage = 20;
	std::cout << GREEN << "ScavTrap " << this->_Name << " initialised" << RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &inst){
	std::cout << GREEN << "ScavTrap " << this->_Name << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

ScavTrap::~ScavTrap(void){
	std::cout << GREEN << "ScavTrap " << this->_Name << " destroyed" << RESET << std::endl;
	return ;
}

void ScavTrap::status(void) const{
	std::cout << bold_on << "STATUS: " << bold_off << "ScavTrap "
	<< this->_Name << " has " <<
	this->_Hit << " hit points, " <<
	this->_Energy << " energy points, and " <<
	this->_Damage << " damage points." << std::endl;
}

void ScavTrap::attack(const std::string &target){
	std::cout << bold_on << "ATTACK: " << bold_off;
	if (this->_Energy <= 0){
		std::cout << "ScavTrap " << this->_Name << " doesn't have enough energy points to attack." << std::endl;
	}
	else if (this->_Hit <= 0){
		std::cout << "ScavTrap " << this->_Name << " doesn't have enough hit points to attack." << std::endl;
	}
	else{
		this->_Energy--;
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " \
		<< this->_Damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void) const{
	std::cout << bold_on << "GUARD:  " << bold_off;
	std::cout << "ScavTrap " << this->_Name << " is now guarding the gate." << std::endl;
}
