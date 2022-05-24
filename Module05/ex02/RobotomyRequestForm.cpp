/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:14:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 18:59:02 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
	AForm("Random Robotomy Form", 72, 45),
	_target("Random Target"){
	std::cout << GREEN << "Default constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) :
	AForm(name, 72, 45),
	_target(target){
	std::cout << GREEN << "Parametrised constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst) :
	AForm(inst.getName(), 72, 45),
	_target(inst.getTarget()){
	std::cout << GREEN << "Copy constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &inst){
	if (this != &inst){
		this->_target = inst._target;
		this->setSigned(inst.isSigned());
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << GREEN << "Destructor Presidential Pardon Form called" << RESET << std::endl;
	return ;	
}

std::string	RobotomyRequestForm::getTarget(void) const{
	return this->_target;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor){
	std::cout << "\U00002705 " << executor.getName() << " executed " << this->getName() << std::endl;
	return ;
}
