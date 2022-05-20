/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:09:23 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
	std::cout << MAGENTA << "Default constructor Dog called" << RESET << std::endl;
	this->_dogBrain = new Brain;
	this->_type = "Dog";
	this->_sound = "Woef Woef";
	return ;
}

Dog::Dog(const Dog &inst){
	std::cout << MAGENTA << "Copy constructor Dog called" << RESET << std::endl;
	*this = inst;
	return ;
}

Dog::~Dog(void){
	delete this->_dogBrain;
	std::cout << MAGENTA << "Default destructor Dog called" << RESET << std::endl;
	return ;
}

Dog & Dog::operator =(Dog const &inst){
	std::cout << CYAN << "Assignment operator Dog called" << RESET << std::endl;
	this->_type = inst._type;
	this->_sound = inst._sound;
	for (int i = 0; i < 100; i++){
		this->_dogBrain->setIdea(inst._dogBrain->retrieveIdea(i));
	}
	return *this;
}

void Dog::IgotAnIdea(std::string idea){
	this->_dogBrain->setIdea(idea);
	return ;
}

void Dog::whatWasIThinkingAgain(void) const{
	int i = 0;
	while (this->_dogBrain->retrieveIdea(i) != "**echo**"){
		std::cout << "Dog says: " << _dogBrain->retrieveIdea(i) << std::endl;
		i++;
	}
	return ;
}
