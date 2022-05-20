/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:49:56 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:08:38 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int 	main(void){

// TEST MAKING AN ARRAY OF 10 ANIMALS, HALF DOGS, HALF CATS

	Animal	*array[10];

	int i = 0;
	
	for (;i < 5; i++){
		std::cout << "Animal " << i << std::endl;
		Dog *newDog = new Dog;
		newDog->IgotAnIdea("I love humans");
		array[i] = newDog;
		std::cout << std::endl;
	}
	for (;i < 10; i++){
		std::cout << "Animal " << i << std::endl;
		Cat *newCat = new Cat;
		newCat->IgotAnIdea("I hate humans");
		array[i] = newCat;
		std::cout << std::endl;
	}

// ALL ANIMALS CAN MAKE THEIR OWN SOUND

	for (i = 0; i < 10; i++){
		std::cout << i << " ";
		array[i]->makeSound();
	}
	std::cout << std::endl;

// MAKING A COPY AND LET ALL ANIMALS MAKE SOUND AGAIN

	Cat *newCat = new Cat;
	newCat->IgotAnIdea("I hate humans");
	newCat->IgotAnIdea("I want food");
	newCat->IgotAnIdea("I need food");
	newCat->whatWasIThinkingAgain();
	std::cout << std::endl;
	
	delete array[0];
	array[0] = newCat;
	array[0]->whatWasIThinkingAgain();
	array[1]->whatWasIThinkingAgain();
	std::cout << std::endl;

// DELETING THE ARRAY

	for (i = 0; i < 10; i++){
		std::cout << "Animal " << i << std::endl;
		delete array[i];
		std::cout << std::endl;
	}

}
