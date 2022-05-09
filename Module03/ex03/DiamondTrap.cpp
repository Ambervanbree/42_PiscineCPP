/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:10:52 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 18:27:02 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#define RESET   "\033[0m"
#define MAGENTA "\033[35m"


DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap(){
	this->_Hit = FragTrap::_Hit;
	this->_Energy = ScavTrap::_Energy;
	this->_Damage = FragTrap::_Damage;
	std::cout << MAGENTA << "Default DiamondTrap initialised" << RESET << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name){
	this->_Hit = FragTrap::_Hit;
	this->_Energy = ScavTrap::_Energy;
	this->_Damage = FragTrap::_Damage;
	std::cout << MAGENTA << "DiamondTrap " << this->getName() << " initialised" << RESET << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst){
	std::cout << MAGENTA << "DiamondTrap " << this->getName() << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << MAGENTA << "DiamondTrap " << this->getName() << " destroyed" << RESET << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator =(DiamondTrap const &inst){
	std::cout << MAGENTA << "DiamondTrap " << " copied" << RESET << std::endl;
    std::cout << inst.getAttackDamage() << std::endl;
	this->setName(inst.getName());
	this->setHitPoints(inst.getHitPoints());
	this->setEnergyLevel(inst.getEnergyLevel());
	this->setAttackDamage(inst.getAttackDamage());
	return *this;
}
