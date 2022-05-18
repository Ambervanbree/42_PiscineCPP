/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:49:56 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/17 12:57:39 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongCat.hpp"

void	testSubject(void){
	std::cout << BOLD << "Tests subject" << NOBOLD << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " is saying ";
	j->makeSound();
	std::cout << i->getType() << " is saying ";
	i->makeSound(); //will output the cat sound!
	std::cout << meta->getType() << " is saying ";
	meta->makeSound();
	
	delete meta;
	delete i;
	delete j;
}

void	extraTest(void){
	std::cout << BOLD << "Extra tests" << NOBOLD << std::endl;
	
	wrongAnimal	wa;
	wrongAnimal *wc = new wrongCat;

	std::cout << wa.getType() << " is saying ";
	wa.makeSound();
	std::cout << wc->getType() << " is saying ";
	wc->makeSound();
	delete wc;
}

int 	main(void){
	testSubject();
	std::cout << std::endl;
	
	extraTest();
	std::cout << std::endl;

	return 0;
}
