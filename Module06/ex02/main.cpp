/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:43:43 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/02 12:36:05 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <stdlib.h>

#define BOLD    "\e[1m"
#define NOBOLD  "\e[0m"

Base * generate(void){
	int		random;
	Base	*classPTR;

	std::srand(std::time(NULL));
	random = std::rand() % 3;

	switch (random){
		case 0:
			classPTR = new A();
			break ;
		case 1:
			classPTR = new B();
			break ;
		case 2:
			classPTR = new C();
			break ;
	}
	return classPTR;
}

void identify(Base* p){
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast <A *> (p);
	if (a)
		std::cout << "This is an A class instance" << std::endl;
	b = dynamic_cast <B *> (p);
	if (b)
		std::cout << "This is an B class instance" << std::endl;
	c = dynamic_cast <C *> (p);
	if (c)
		std::cout << "This is an C class instance" << std::endl;	
}

void identify(Base& p){
	try {
		A	&a = dynamic_cast <A &> (p);
		(void)a;
		std::cout << "This is an A class instance" << std::endl;
	}
	catch (std::exception &e) {};
	try {
		B	&b = dynamic_cast <B &> (p);
		(void)b;
		std::cout << "This is an B class instance" << std::endl;
	}
	catch (std::exception &e) {};
	try {
		C	&c = dynamic_cast <C &> (p);
		(void)c;
		std::cout << "This is an C class instance" << std::endl;
	}
	catch (std::exception &e) {};
}

int main (void){
		Base	*basePTR;
		
		std::cout << BOLD << "Randomly creating an instance of A, B or C class:" << NOBOLD << std::endl;
		basePTR = generate();
		std::cout << std::endl;
		
		std::cout << BOLD << "Identifying the class through a pointer:" << NOBOLD << std::endl;
		identify(basePTR);
		std::cout << std::endl;

		std::cout << BOLD << "Identifying the class through a reference:" << NOBOLD << std::endl;
		Base	&baseREF = *basePTR;
		identify(baseREF);
		std::cout << std::endl;
		
		std::cout << BOLD << "Cleaning up:" << NOBOLD << std::endl;
		delete basePTR;
}