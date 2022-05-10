/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:10:52 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 12:33:57 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(){
	this->_Energy = 50;
	DiamondTrap::_Name = "Unknown";
	ClapTrap::_Name = "Unknown_clap_name";
	std::cout << MAGENTA << "Default DiamondTrap initialised" << RESET << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name){
	DiamondTrap::_Name = name;
	ClapTrap::_Name = name.append("_clap_name");
	this->_Energy = 50;
	std::cout << MAGENTA << "DiamondTrap " << DiamondTrap::_Name << " initialised" << RESET << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst){
	std::cout << MAGENTA << "DiamondTrap " << DiamondTrap::_Name << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << MAGENTA << "DiamondTrap " << DiamondTrap::_Name << " destroyed" << RESET << std::endl;
	return ;
}

void DiamondTrap::whoAmI(void){
	std::cout << bold_on << "WHOAMI: " << bold_off << "I am both "
	<< DiamondTrap::_Name << " and "
	<< ClapTrap::_Name << "." << std::endl;
}
