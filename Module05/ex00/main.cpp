/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:12:09 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 10:37:59 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	std::cout << BOLD << ">> Initialising bureaucrat Louise with a correct grade:" << NOBOLD << std::endl;
	Bureaucrat	Louise("Louise", 25);
	std::cout << CYAN << Louise << std::endl;
	std::cout << RESET << std::endl;
	
	std::cout << BOLD << ">> Initialising bureaucrat Hanna with a correct grade:" << NOBOLD << std::endl;
	Bureaucrat	Hanna("Hanna", 1);
	std::cout << CYAN << Hanna << std::endl;
	std::cout << RESET << std::endl;
	
	std::cout << BOLD << ">> Initialising bureaucrat Eva with a grade that is too high:" << NOBOLD << std::endl;
	Bureaucrat	Eva("Eva", 0);
	std::cout << CYAN << Eva << std::endl;
	std::cout << RESET << std::endl;
	
	std::cout << BOLD << ">> Initialising bureaucrat Marie with a grade that is too low:" << NOBOLD << std::endl;
	Bureaucrat	Marie("Marie", 151);
	std::cout << CYAN << Marie << std::endl;
	std::cout << RESET << std::endl;
	
	std::cout << BOLD << ">> We can increment and decrement the grade of Louise:" << NOBOLD << std::endl;
	std::cout << CYAN << Louise << std::endl;
	Louise.incrementGrade();
	std::cout << CYAN << Louise << std::endl;
	Louise.decrementGrade();
	std::cout << CYAN << Louise << std::endl;
	std::cout << RESET << std::endl;
	
	std::cout << BOLD << ">> We cannot increment the grade of Hanna:" << NOBOLD << std::endl;
	std::cout << CYAN << Hanna << std::endl;
	Hanna.incrementGrade();
	std::cout << CYAN << Hanna << std::endl;
	std::cout << RESET << std::endl;

	std::cout << BOLD << ">> We cannot decrement the grade of Marie:" << NOBOLD << std::endl;
	std::cout << CYAN << Marie << std::endl;
	Marie.decrementGrade();
	std::cout << CYAN << Marie << std::endl;
	std::cout << RESET << std::endl;

	std::cout << BOLD << ">> Deconstructing the bureaucrats:" << NOBOLD << std::endl;
}