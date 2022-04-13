/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:31:33 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:31:34 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weaponREF(weapon){
	std::cout << "HumanA " << this->_name << " has been outfitted with a " << this->_weaponREF.getType() << std::endl;
}

HumanA::~HumanA(void){
	std::cout << "HumanA has left the building" << std::endl;
}

void HumanA::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_weaponREF.getType() << std::endl;
}
