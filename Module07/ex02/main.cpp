/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:21:06 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 15:31:20 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
#define BOLD    "\e[1m"

int	main(void){
	int * a = new int();
	char * b = new char();
	std::cout << "Default int: [" << *a << "]" << std::endl;
	std::cout << "Default char: [" << *b << "]" << std::endl << std::endl;
	delete a;
	delete b;
	
	std::cout << BOLD << "Creating an empty array:" << RESET << std::endl;
	Array<int>	array1;
	std::cout << "Array1: ";
	array1.displayArray();
	std::cout << std::endl;
	
	std::cout << BOLD << "Creating an array with 4 char:" << RESET << std::endl;
	Array<char>	array2(4);
	std::cout << "Array2: ";
	array2.displayArray();
	std::cout << std::endl;

	std::cout << BOLD << "Creating an array with 5 ints:" << RESET << std::endl;
	Array<int>	array3(5);
	std::cout << "Array3: ";
	array3.displayArray();
	std::cout << std::endl;


	std::cout << BOLD << "Copying an array to show we can change both independently:" << RESET << std::endl;
	Array<int>	array4(array3);
	std::cout << "Array4: ";
	array4.displayArray();	
	array3[2] = 8;
	array4[3] = 4;
	std::cout << std::endl << "Array3: ";
	array3.displayArray();
	std::cout << "Array4: ";
	array4.displayArray();
	std::cout << std::endl;

	std::cout << BOLD << "The same, but now with the assignment operator:" << RESET << std::endl;
	array4 = array3;
	std::cout << std::endl << "Array3: ";
	array3.displayArray();
	std::cout << "Array4: ";
	array4.displayArray();
	array3[4] = 1;
	array4[0] = 3;
	std::cout << std::endl << "Array3: ";
	array3.displayArray();
	std::cout << "Array4: ";
	array4.displayArray();
	std::cout << std::endl;

	std::cout << BOLD << "Trying to reach an out of bounds element:" << RESET << std::endl;
	try{
		std::cout << array4[7] << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << BOLD << "Cleaning up:" << RESET << std::endl;
	}
