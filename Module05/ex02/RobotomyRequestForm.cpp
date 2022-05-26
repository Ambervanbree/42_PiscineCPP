/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:14:13 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 14:41:31 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : 
	AForm("Robotomy Request Form", 72, 45),
	_target("Random Target"){
		std::cout << BLUE << "Default constructor Robotomy Request Form called" << RESET << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("Robotomy Request Form", 72, 45),
	_target(target){
		std::cout << BLUE << "Parametrised constructor Robotomy Request Form called" << RESET << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst) :
	AForm(inst.getName(), 72, 45),
	_target(inst.getTarget()){
		std::cout << BLUE << "Copy constructor Robotomy Request Form called" << RESET << std::endl;
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
	std::cout << BLUE << "Destructor Robotomy Request Form called" << RESET << std::endl;
	return ;	
}

std::string	RobotomyRequestForm::getTarget(void) const{
	return this->_target;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor){
	this->executeOK(executor);
	std::cout << "\U00002705 " << executor.getName() << " executed " << this->getName() << std::endl;
	std::cout << BOLD << "!!!! DDrGGRrrrrggggdddrrrGGrUUUUU !!!!" << RESET << std::endl;
	if (rand() % 2){
		std::cout << this->_target << " has succesfully been robotomized! \U0001F916 \U0001F916" << std::endl;
	}
	else{
		std::cout << "Robotomy failed .... " << std::endl;
	}
	return ;
}
