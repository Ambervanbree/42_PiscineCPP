/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:31:08 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:31:09 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Random zombie born" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie died: " << this->_name << std::endl;
}

void	Zombie::setName(std::string input){
	this->_name = input;
	std::cout << "Zombie named: " << this->_name << std::endl;
}

void	Zombie::announce(void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
