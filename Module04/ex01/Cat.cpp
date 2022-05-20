/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:09:36 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	std::cout << CYAN <<"Default constructor Cat called" << RESET << std::endl;
	this->_catBrain = new Brain;
	this->_type = "Cat";
	this->_sound = "Miauw";
	return ;
}

Cat::Cat(const Cat &inst){
	std::cout << CYAN << "Copy constructor Cat called" << RESET << std::endl;
	*this = inst;
	return ;
}

Cat::~Cat(void){
	delete this->_catBrain;
	std::cout << CYAN << "Default destructor Cat called" << RESET << std::endl;
	return ;
}

Cat & Cat::operator =(Cat const &inst){
	std::cout << CYAN << "Assignment operator Cat called" << RESET << std::endl;
	this->_type = inst._type;
	this->_sound = inst._sound;
	for (int i = 0; i < 100; i++){
		this->_catBrain->setIdea(inst._catBrain->retrieveIdea(i));
	}
	return *this;
}

void Cat::IgotAnIdea(std::string idea){
	this->_catBrain->setIdea(idea);
	return ;
}

void Cat::whatWasIThinkingAgain(void) const{
	int i = 0;
	while (i < 100){
		if (this->_catBrain->retrieveIdea(i) == "**echo**"){
			break ;
		}
		std::cout << "Cat says: " << this->_catBrain->retrieveIdea(i) << std::endl;
		i++;
	}
	return ;
}
