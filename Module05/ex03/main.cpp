/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:12:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 14:07:12 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void){
	std::cout << "___________________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << BOLD << "Creating a random intern and a bureaucrat:" << RESET << std::endl << std::endl;
	Intern		RandomIntern;
	Bureaucrat	Louise("Louise", 62);
	AForm		*form;
	std::cout << std::endl;

	try{
		std::cout << "___________________________________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << BOLD << "Creating Robotomy Request Form:" << RESET << std::endl << std::endl;
		form = RandomIntern.makeForm("Robotomy Request Form", "You");
		std::cout << *form << std::endl;
		Louise.signForm(*form);
		Louise.executeForm(*form);
		delete form;
		std::cout << std::endl;

		std::cout << "___________________________________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << BOLD << "Creating Presidential Pardon Form:" << RESET << std::endl << std::endl;
		form = RandomIntern.makeForm("Presidential Pardon Form", "Norminet");
		std::cout << *form << std::endl;
		Louise.signForm(*form);
		Louise.executeForm(*form);
		delete form;
		std::cout << std::endl;

		std::cout << "___________________________________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << BOLD << "Creating Shrubbery Creation Form:" << RESET << std::endl << std::endl;
		form = RandomIntern.makeForm("Shrubbery Creation Form", "Home");
		std::cout << *form << std::endl;
		Louise.signForm(*form);
		Louise.executeForm(*form);
		delete form;
		std::cout << std::endl;


		std::cout << "___________________________________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << BOLD << "Trying to create a form that doesn't exist:" << RESET << std::endl << std::endl;
		form = RandomIntern.makeForm("Shrubbery Form", "Home");
		std::cout << *form << std::endl;
		Louise.signForm(*form);
		Louise.executeForm(*form);
		delete form;
		std::cout << std::endl;
	}
	catch (std::exception & e){
		std::cerr << RED << "Intern could not create form, because " << e.what() << RESET << std::endl << std::endl;
	}
	std::cout << std::endl;

	std::cout << "___________________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl << BOLD << ">> Deconstructing all objects that are left:" << RESET << std::endl;
}