/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 14:41:57 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	std::cout << CYAN <<"Default constructor Cat called" << RESET << std::endl;
	this->_catBrain = new Brain;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &inst) : Animal(){
	std::cout << CYAN << "Copy constructor Cat called" << RESET << std::endl;
	this->_type = "Cat";
	this->_catBrain = new Brain;
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
	for (int i = 0; i < 100; i++){
		this->_catBrain->setIdea(inst._catBrain->retrieveIdea(i));
	}
	return *this;
}

void Cat::IgotAnIdea(std::string idea) const{
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

void Cat::makeSound(void) const{
	std::cout << "Miauw" << std::endl;
	return ;	
}
