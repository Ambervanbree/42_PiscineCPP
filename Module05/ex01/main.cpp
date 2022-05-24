/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:12:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 13:12:26 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	createForm(std::string formName, int sign, int execute){	
	try{
		Form	form(formName, sign, execute);
		std::cout << form << std::endl;
	}
	catch (std::exception & e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}

int	main(void){
	std::cout << BOLD << ">> Initialising bureaucrats Louise, Eva and Marie:" << RESET << std::endl;
	Bureaucrat	Louise("Louise", 130), Eva("Eva", 3), Marie("Marie", 25);
	std::cout << Louise << std::endl;
	std::cout << Eva << std::endl;
	std::cout << Marie << std::endl;
	std::cout << std::endl;

	std::cout << BOLD << ">> Creating forms with invalid parametres:" << RESET << std::endl;
	createForm("Form1", 151, 50);
	createForm("Form2", 50, 151);
	createForm("Form3", 0, 50);
	createForm("Form4", 50, 0);	
	std::cout << std::endl;

	std::cout << BOLD << ">> Creating a correct form and having it signed by the different bureaucrats:" << RESET << std::endl;
	try{
		Form	form("Form5", 35, 4);
		std::cout << form << std::endl;
		Louise.signForm(form);
		Eva.signForm(form);
		Marie.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
	}
	catch (std::exception & e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}	
	std::cout << std::endl;
	
	std::cout << BOLD << ">> Deconstructing all objects that are left:" << RESET << std::endl;
}