/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:21:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 18:59:05 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
	AForm("Random Pardon Form", 25, 5),
	_target("Random Target"){
	std::cout << YELLOW << "Default constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) :
	AForm(name, 25, 5),
	_target(target){
	std::cout << YELLOW << "Parametrised constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &inst) :
	AForm(inst.getName(), 25, 5),
	_target(inst.getTarget()){
	std::cout << YELLOW << "Copy constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &inst){
	if (this != &inst){
		this->_target = inst._target;
		this->setSigned(inst.isSigned());
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << YELLOW << "Destructor Presidential Pardon Form called" << RESET << std::endl;
	return ;	
}

std::string	PresidentialPardonForm::getTarget(void) const{
	return this->_target;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor){
	std::cout << "\U00002705 " << executor.getName() << " executed " << this->getName() << std::endl;
	return ;
}
