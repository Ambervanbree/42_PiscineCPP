/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:15:39 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 18:58:58 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
	AForm("Random Shrubbery Form", 145, 137),
	_target("Random Target"){
	std::cout << GREEN << "Default constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) :
	AForm(name, 145, 137),
	_target(target){
	std::cout << GREEN << "Parametrised constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &inst) :
	AForm(inst.getName(), 145, 137),
	_target(inst.getTarget()){
	std::cout << GREEN << "Copy constructor Presidential Pardon Form called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &inst){
	if (this != &inst){
		this->_target = inst._target;
		this->setSigned(inst.isSigned());
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << GREEN << "Destructor Presidential Pardon Form called" << RESET << std::endl;
	return ;	
}

std::string	ShrubberyCreationForm::getTarget(void) const{
	return this->_target;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor){
	std::cout << "\U00002705 " << executor.getName() << " executed " << this->getName() << std::endl;
	return ;
}

