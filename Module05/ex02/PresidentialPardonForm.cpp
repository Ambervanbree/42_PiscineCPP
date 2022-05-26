/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:21:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 12:25:17 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
	AForm("Presidential Pardon Form", 25, 5),
	_target("Random Target"){
	std::cout << YELLOW << "Default constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("Presidential Pardon Form", 25, 5),
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
	this->executeOK(executor);
	std::cout << "\U00002705 " << executor.getName() << " executed " << this->getName() << std::endl;
	std::cout << "It is formally informed that through this form ";
	std::cout << this->_target << " has been pardoned by President Zaphod Breeblebox" << std::endl;
	return ;
}
