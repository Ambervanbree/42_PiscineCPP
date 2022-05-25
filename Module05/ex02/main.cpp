/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:12:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 18:40:55 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

int	main(void){
	std::cout << "___________________________________________________________________________________" << std::endl << std::endl;
	std::cout << BOLD << ">> Initialising bureaucrats Louise, Eva and Marie:" << RESET << std::endl;
	Bureaucrat	Louise("Louise", 140), Eva("Eva", 3), Marie("Marie", 25);
	std::cout << Louise << std::endl;
	std::cout << Eva << std::endl;
	std::cout << Marie << std::endl;
	std::cout << "___________________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << BOLD << ">> Initialising a Presidential Pardon Form and executing it:" << RESET << std::endl;
	PresidentialPardonForm	*pardon = new PresidentialPardonForm("Pardon", "target");
	std::cout << std::endl << *pardon << std::endl << std::endl;
	Louise.executeForm(*pardon);
	Marie.signForm(*pardon);
	Louise.executeForm(*pardon);
	Marie.executeForm(*pardon);
	Eva.executeForm(*pardon);
	std::cout << std::endl;
	delete pardon;
	std::cout << "___________________________________________________________________________________" << std::endl;

	std::cout << std::endl << BOLD << ">> Initialising a Shrubbery Creation Form and executing it:" << RESET << std::endl;
	ShrubberyCreationForm	*shrubs = new ShrubberyCreationForm("Shrubs", "target");
	std::cout << std::endl << *shrubs << std::endl << std::endl;
	Louise.executeForm(*shrubs);
	Louise.signForm(*shrubs);
	Louise.executeForm(*shrubs);
	Marie.executeForm(*shrubs);
	Eva.executeForm(*shrubs);
	std::cout << std::endl;
	delete shrubs;
	std::cout << "___________________________________________________________________________________" << std::endl;

	std::cout << std::endl << BOLD << ">> Initialising a Robotomy Request Form and executing it:" << RESET << std::endl;
	RobotomyRequestForm	*rrrrrr = new RobotomyRequestForm("Rrrrrr", "target");
	std::cout << std::endl << *rrrrrr << std::endl << std::endl;
	Eva.executeForm(*rrrrrr);
	Marie.signForm(*rrrrrr);
	Louise.executeForm(*rrrrrr);
	Marie.executeForm(*rrrrrr);
	Eva.executeForm(*rrrrrr);
	std::cout << std::endl;
	delete rrrrrr;
	std::cout << "___________________________________________________________________________________" << std::endl;

	std::cout << std::endl << BOLD << ">> Deconstructing all objects that are left:" << RESET << std::endl;
}