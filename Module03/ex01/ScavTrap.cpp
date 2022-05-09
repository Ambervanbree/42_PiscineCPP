/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:51 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 17:27:29 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#define RESET   "\033[0m"
#define GREEN	"\033[32m"

ScavTrap::ScavTrap(void) : ClapTrap(){
	this->setHitPoints(100);
	this->setEnergyLevel(50);
	this->setAttackDamage(20);
	std::cout << GREEN << "Default ScavTrap initialised" << RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->setHitPoints(100);
	this->setEnergyLevel(50);
	this->setAttackDamage(20);
	std::cout << GREEN << "ScavTrap " << this->getName() << " initialised" << RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &inst){
	std::cout << GREEN << "ScavTrap " << this->getName() << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

ScavTrap::~ScavTrap(void){
	std::cout << GREEN << "ScavTrap " << this->getName() << " destroyed" << RESET << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator =(ScavTrap const &inst){
	std::cout << GREEN << "ScavTrap " << " copied" << RESET << std::endl;
    std::cout << inst.getAttackDamage() << std::endl;
	this->setName(inst.getName());
	this->setHitPoints(inst.getHitPoints());
	this->setEnergyLevel(inst.getEnergyLevel());
	this->setAttackDamage(inst.getAttackDamage());
	return *this;
}

void ScavTrap::status(void) const{
	std::cout << bold_on << "STATUS: " << bold_off << "ScavTrap "
	<< this->getName() << " has " <<
	this->getHitPoints() << " hit points, " <<
	this->getEnergyLevel() << " energy points, and " <<
	this->getAttackDamage() << " damage points." << std::endl;
}

void ScavTrap::attack(const std::string &target){
	std::cout << bold_on << "ATTACK: " << bold_off;
	if (this->getEnergyLevel() <= 0){
		std::cout << "ScavTrap " << this->getName() << " doesn't have enough energy points to attack." << std::endl;
	}
	else if (this->getHitPoints() <= 0){
		std::cout << "ScavTrap " << this->getName() << " doesn't have enough hit points to attack." << std::endl;
	}
	else{
		this->setEnergyLevel(getEnergyLevel() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " \
		<< this->getAttackDamage() << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void) const{
	std::cout << bold_on << "GUARD:  " << bold_off;
	std::cout << "ScavTrap " << this->getName() << " is now guarding the gate." << std::endl;
}
