/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:33:25 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 18:02:45 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

FragTrap::FragTrap(void) : ClapTrap(){
	this->setHitPoints(100);
	this->setEnergyLevel(100);
	this->setAttackDamage(30);
	std::cout << YELLOW << "Default FragTrap initialised" << RESET << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->setHitPoints(100);
	this->setEnergyLevel(100);
	this->setAttackDamage(30);
	std::cout << YELLOW << "FragTrap " << this->getName() << " initialised" << RESET << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &inst){
	std::cout << YELLOW << "FragTrap " << this->getName() << " copied" << RESET << std::endl;
	*this = inst;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << YELLOW << "FragTrap " << this->getName() << " destroyed" << RESET << std::endl;
	return ;
}

FragTrap & FragTrap::operator =(FragTrap const &inst){
	std::cout << YELLOW << "FragTrap " << " copied" << RESET << std::endl;
    std::cout << inst.getAttackDamage() << std::endl;
	this->setName(inst.getName());
	this->setHitPoints(inst.getHitPoints());
	this->setEnergyLevel(inst.getEnergyLevel());
	this->setAttackDamage(inst.getAttackDamage());
	return *this;
}

void FragTrap::status(void) const{
	std::cout << bold_on << "STATUS: " << bold_off << "FragTrap "
	<< this->getName() << " has " <<
	this->getHitPoints() << " hit points, " <<
	this->getEnergyLevel() << " energy points, and " <<
	this->getAttackDamage() << " damage points." << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << BLUE << "* Question ! Do you want a high five from " 
	<< this->getName() << "? YES or NO?" << RESET << std::endl;

	std::string	input;
	std::cin >> input;
	if (!input.compare("YES")){
		std::cout << bold_on << "Highfiiiiiiive!!     ヘ( ^o^)ノ＼(^_^ )" << bold_off << std::endl;
	}
	else if(!input.compare("NO")){
		std::cout << bold_on << "Sadness overload... (｡•́︿•̀｡)" << bold_off << std::endl;
	}
	else{
		std::cout << bold_on << "Didn't understand! 乁( ⁰͡ Ĺ̯ ⁰͡ ) ㄏ" << bold_off << std::endl;
	}
}
