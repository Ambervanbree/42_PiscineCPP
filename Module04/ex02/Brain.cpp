/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:09:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:00:25 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << YELLOW << "Default Brain constructor called" << RESET << std::endl;
	return ;
}

Brain::Brain(const Brain &inst){
	std::cout << YELLOW << "Copy Brain constructor called" << RESET << std::endl;
	*this = inst;
	return ;
}

Brain::~Brain(void){
	std::cout << YELLOW << "Default Brain destructor called" << RESET << std::endl;
	return ;
}

Brain & Brain::operator =(Brain const &inst){
	std::cout << YELLOW << "Brain assignment operator called" << RESET << std::endl;
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = inst.retrieveIdea(i);
	}
	return *this;
}

std::string Brain::retrieveIdea(int i) const{
	if (this->_ideas[i].empty()){
		return "**echo**";
	}
	else{
		return this->_ideas[i];
	}
}

void Brain::setIdea(std::string idea){
	int i = 0;
	while (!this->_ideas[i].empty()){
		i++;
	}
	this->_ideas[i] = idea;
	return ;
}
