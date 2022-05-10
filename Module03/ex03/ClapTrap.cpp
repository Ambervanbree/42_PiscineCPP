/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:42:03 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 11:22:35 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

ClapTrap::ClapTrap(void) : _Name("Anonymous"), _Hit(10), _Energy(10), _Damage(0){
	std::cout << CYAN << "Default ClapTrap initialised" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit(10), _Energy(10), _Damage(0){
	std::cout << CYAN << "ClapTrap " << this->_Name << " initialised" << RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &inst){
	std::cout << CYAN << "ClapTrap " << this->_Name << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

ClapTrap::~ClapTrap(void){
	std::cout << CYAN << "ClapTrap " << this->_Name << " destroyed" << RESET << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator =(ClapTrap const &inst){
	std::cout << CYAN << "ClapTrap " << this->_Name << " copied" << RESET << std::endl;
	this->_Name = inst.getName();
	this->_Hit = inst.getHitPoints();
	this->_Energy = inst.getEnergyLevel();
	this->_Damage = inst.getAttackDamage();
	return *this;
}

std::string	ClapTrap::getName() const {
	return (this->_Name);
}

int	ClapTrap::getHitPoints() const {
	return (this->_Hit);
}

int	ClapTrap::getEnergyLevel() const {
	return (this->_Energy);
}

int	ClapTrap::getAttackDamage() const {
	return (this->_Damage);
}

void ClapTrap::attack(const std::string &target){
	std::cout << bold_on << "ATTACK: " << bold_off;
	if (this->_Energy <= 0){
		std::cout << "ClapTrap " << this->_Name << " doesn't have enough energy points to attack." << std::endl;
	}
	else if (this->_Hit <= 0){
		std::cout << "ClapTrap " << this->_Name << " doesn't have enough hit points to attack." << std::endl;
	}
	else{
		this->_Energy--;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " \
		<< this->_Damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << bold_on << "DAMAGE: " << bold_off;
	if (this->_Hit <= 0){
		std::cout << "ClapTrap " << this->_Name << " is already dead." << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->_Name << " is hit with " << amount << " points of damage!" << std::endl;		
		this->_Hit -= amount;
		if (this->_Hit <= 0){
			this->_Hit = 0;
			std::cout << RED << "ClapTrap " << this->_Name << " took its final blow. Goodnight..." << RESET << std::endl; 
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << bold_on << "REPAIR: " << bold_off;
	if (this->_Energy <= 0){
		std::cout << "ClapTrap " << this->_Name << " doesn't have enough energy points to repair itself." << std::endl;
	}
	else if (this->_Hit <= 0){
		std::cout << "ClapTrap " << this->_Name << " doesn't have enough hit points to repair itself." << std::endl;
	}
	else{
		this->_Energy--;
		this->_Hit += amount;
		std::cout << "ClapTrap " << this->_Name << " is repaired with " << amount << " hit points." << std::endl;
	}
}

void ClapTrap::status(void) const{
	std::cout << bold_on << "STATUS: " << bold_off << "ClapTrap "
	<< this->_Name << " has " <<
	this->_Hit << " hit points, " <<
	this->_Energy << " energy points, and " <<
	this->_Damage << " damage points." << std::endl;
}