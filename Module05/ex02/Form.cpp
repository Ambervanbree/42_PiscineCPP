/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:24:06 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 19:00:44 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(void) :
	_name("Random form"),
	_signed(false),
	_minSigningGrade(150),
	_minExecutingGrade(150){
	std::cout << MAGENTA << "Default constructor AForm called" << RESET << std::endl;
	return ;
	}

AForm::AForm(std::string name, int sign, int execute) :
	_name(name),
	_signed(false),
	_minSigningGrade(sign),
	_minExecutingGrade(execute){
	std::cout << MAGENTA << "Parametrised constructor AForm called" << RESET << std::endl;
	if (sign < 1 || execute < 1)
		throw AForm::GradeTooHighException();
	else if (sign > 150 || execute > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(const AForm &inst) :
	_name(inst.getName()),
	_signed(inst.isSigned()),
	_minSigningGrade(inst.getMinSigningGrade()),
	_minExecutingGrade(inst.getMinExecutingGrade()){
	std::cout << MAGENTA << "Copy constructor AForm called" << RESET << std::endl;
	*this = inst;
	return ;
}

AForm & AForm::operator =(const AForm &inst){
	std::cout << MAGENTA << "Assignment operator AForm called" << RESET << std::endl;
	if (this != &inst){
		this->_signed = inst.isSigned();
	}
	return *this;
}

AForm::~AForm(void){
	std::cout << MAGENTA << "Destructor AForm called" << RESET << std::endl;
	return ;
}

std::string	AForm::getName() const{
	return this->_name;
}

bool		AForm::isSigned() const{
	return this->_signed;
}

void		AForm::setSigned(bool sign){
	this->_signed = sign;
	return ;
}

int			AForm::getMinSigningGrade() const{
	return this->_minSigningGrade;
}

int			AForm::getMinExecutingGrade() const{
	return this->_minExecutingGrade;
}

void		AForm::beSigned(Bureaucrat &bureaucrat){
	if (this->_signed){
		throw AForm::AlreadySigned();
	}
	else{
		this->_signed = true;
		std::cout << "\U00002705 " << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
}

bool		AForm::executeOK(Bureaucrat const &bureaucrat){
	if (!this->_signed)
		throw AForm::NotSignedYet();
	if (bureaucrat.getGrade() > this->_minExecutingGrade)
		throw AForm::BureacratGradeTooLowException();
	return true;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Invalid form, because a grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Invalid form, because a grade is too low.";	
}

const char* AForm::BureacratGradeTooLowException::what() const throw(){
	return " their grade is too low.";
}

const char* AForm::AlreadySigned::what() const throw(){
	return " it is already signed.";
}

const char* AForm::NotSignedYet::what() const throw(){
	return " form is not signed yet.";
}

const char* AForm::CouldNotOpenFile::what() const throw(){
	return " shrubbery form could not be created.";
}

std::ostream & operator <<(std::ostream &o, AForm const &inst){
	o << LINE << "Form " << inst.getName() << RESET
	<< "\nSigned:                   ";
	
	if (inst.isSigned()){
		o << "yes";
	}
	else {
		o << "no";
	}
	
	o << "\nMinimum grade to sign:    " << inst.getMinSigningGrade()
	<< "\nMinimum grade to execute: " << inst.getMinExecutingGrade() << std::endl;
	return o;
}


// note to self: bureaucrat in exercise before passed as argument should maybe be const? 