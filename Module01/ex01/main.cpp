/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:31:01 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:31:02 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	{
		Zombie	*hordeEva;
		hordeEva = zombieHorde(20, "Eva");
		for(int i = 0; i < 20; i++){
			hordeEva[i].announce();
		}
		delete [] hordeEva;
	}
	{
		Zombie	*hordeLurch;
		hordeLurch = zombieHorde(15, "Lurch");
		for(int i = 0; i < 15; i++){
			hordeLurch[i].announce();
		}
		delete [] hordeLurch;
	}
}
