/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:30:15 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:30:15 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	// Pointer to heap
	Zombie	*ZombiePtr;
	// Creating zombie on Heap
	ZombiePtr = newZombie("Sophie");
	// Creating zombie on stack
	randomChump("Amb-ARRRR");
	// Zombie on heap is still alive
	ZombiePtr->announce();
	// Deleting zombie on Heap
	delete ZombiePtr;
}