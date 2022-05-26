/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:24:06 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 11:12:32 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

	Form::Form(void) :
		_name("Random form"),
		_signed(false),
		_minSigningGrade(150),
		_minExecutingGrade(150){
		std::cout << GREEN << "Default constructor Form called" << RESET << std::endl;
		return ;
		}

	Form::Form(std::string name, int sign, int execute) :
		_name(name),
		_signed(false),
		_minSigningGrade(sign),
		_minExecutingGrade(execute){
		std::cout << GREEN << "Parametrised constructor Form called" << RESET << std::endl;
		if (sign < 1 || execute < 1)
			throw Form::GradeTooHighException();
		else if (sign > 150 || execute > 150)
			throw Form::GradeTooLowException();
		return ;
	}
	
	Form::Form(const Form &inst) :
		_name(inst.getName()),
		_signed(inst.isSigned()),
		_minSigningGrade(inst.getMinSigningGrade()),
		_minExecutingGrade(inst.getMinExecutingGrade()){
		std::cout << GREEN << "Copy constructor Form called" << RESET << std::endl;
		*this = inst;
		return ;
	}
	
	Form & Form::operator =(const Form &inst){
		std::cout << GREEN << "Assignment operator Form called" << RESET << std::endl;
		if (this != &inst){
			this->_signed = inst.isSigned();
		}
		return *this;
	}
	
	Form::~Form(void){
		std::cout << GREEN << "Destructor Form called" << RESET << std::endl;
		return ;
	}

	std::string	Form::getName() const{
		return this->_name;
	}
	
	bool		Form::isSigned() const{
		return this->_signed;
	}
	
	int			Form::getMinSigningGrade() const{
		return this->_minSigningGrade;
	}
	
	int			Form::getMinExecutingGrade() const{
		return this->_minExecutingGrade;
	}
	
	void		Form::beSigned(Bureaucrat &bureaucrat){
		if (this->_signed)
			throw Form::AlreadySigned();
		else if (bureaucrat.getGrade() > this->_minSigningGrade)
			throw Form::BureacratGradeTooLowException();
		else{
			this->_signed = true;
			std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
		}
	}

	const char* Form::GradeTooHighException::what() const throw(){
		return "Invalid form, because a grade is too high.";
	}
	
	const char* Form::GradeTooLowException::what() const throw(){
		return "Invalid form, because a grade is too low.";	
	}

	const char* Form::BureacratGradeTooLowException::what() const throw(){
		return " their grade is too low.";
	}
	
	const char* Form::AlreadySigned::what() const throw(){
		return " it is already signed.";
	}

	std::ostream & operator <<(std::ostream &o, Form const &inst){
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
	