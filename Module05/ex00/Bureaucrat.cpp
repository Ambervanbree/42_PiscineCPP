/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:04:05 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 10:48:24 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

	Bureaucrat::Bureaucrat(void) : 
	_name("Jane Doe"), 
	_grade(150){
		std::cout << CYAN << "Default constructor Bureaucrat called" << RESET << std::endl;
		return ;
	}
	
	Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) :
	_name(name){
		std::cout << CYAN << "Parametrised constructor Bureaucrat called" << RESET << std::endl;
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
		return ;
	}
	
	Bureaucrat::Bureaucrat(const Bureaucrat &inst){
		std::cout << CYAN << "Copy constructor Bureaucrat called" << RESET << std::endl;
		*this = inst;
		return ;
	}

	Bureaucrat::~Bureaucrat(void){
		std::cout << CYAN << "Destructor Bureaucrat called" << RESET << std::endl;
		return ;		
	}
	
	Bureaucrat & Bureaucrat::operator =(const Bureaucrat &inst){
		std::cout << CYAN << "Assignment operator Bureaucrat called" << RESET << std::endl;
		this->_grade = inst._grade;
		return *this;
	}

	std::string Bureaucrat::getName(void) const{
		return this->_name;
	}
	
	unsigned int Bureaucrat::getGrade(void) const{
		return this->_grade;
	}
	
	void		Bureaucrat::incrementGrade(void){
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	
	void		Bureaucrat::decrementGrade(void){
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;	
	}
	
	const char* Bureaucrat::GradeTooLowException::what() const throw(){
		return "Minimum grade is 150, grade is too low.";
	}

	const char* Bureaucrat::GradeTooHighException::what() const throw(){
		return "Maximum grade is 1, grade is too high.";
	}

	std::ostream & operator <<(std::ostream &o, Bureaucrat const &inst){
		o << "Bureaucrat " << inst.getName() << " has grade " << inst.getGrade();
		return o;
	}
