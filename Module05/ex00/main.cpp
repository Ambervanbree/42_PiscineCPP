/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:53:51 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 10:59:40 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	try{
		std::cout << BOLD << ">> Initialising bureaucrat Louise with a grade that is too low:" << NOBOLD << std::endl;
		Bureaucrat	Louise("Louise", 180);
		std::cout << Louise << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	try{
		std::cout << BOLD << ">> Initialising bureaucrat Louise with a grade that is too high:" << NOBOLD << std::endl;
		Bureaucrat	Louise("Louise", 0);
		std::cout << Louise << std::endl;
	} 
	catch (std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;	
	
	try{
		std::cout << BOLD << ">> Initialising bureaucrat Louise with a correct grade, incrementing and decrementing:" << NOBOLD << std::endl;
		Bureaucrat	Louise("Louise", 25);
		std::cout << Louise << std::endl;
		Louise.incrementGrade();
		Louise.incrementGrade();
		std::cout << Louise << std::endl;
		Louise.decrementGrade();
		std::cout << Louise << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;		

	try{
		std::cout << BOLD << ">> Initialising bureaucrat Louise with a grade that is too high to be incremented:" << NOBOLD << std::endl;
		Bureaucrat	Louise("Louise", 1);
		std::cout << Louise << std::endl;
		Louise.incrementGrade();
		std::cout << Louise << std::endl;
		Louise.decrementGrade();
		std::cout << Louise << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;	

	try{
		std::cout << BOLD << ">> Initialising bureaucrat Louise with a grade that is too low to be decremented:" << NOBOLD << std::endl;
		Bureaucrat	Louise("Louise", 150);
		std::cout << Louise << std::endl;
		Louise.decrementGrade();
		std::cout << Louise << std::endl;
		Louise.incrementGrade();
		std::cout << Louise << std::endl;
	}
	catch (std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;
}