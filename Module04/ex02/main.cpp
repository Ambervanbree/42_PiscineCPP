/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:49:56 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 15:47:57 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int 	main(void){
	Dog		newDog;
	Cat		newCat;

	newDog.makeSound();
	newCat.makeSound();

	// but instantiating a class AAnimal is not possible. Uncomment to check:
	// AAnimal	newAAnimal;
	// newAAnimal.makeSound();
}
