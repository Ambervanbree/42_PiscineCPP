/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:54 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 17:29:03 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	ClapTrap	brigitte("Brigitte");
	ScavTrap	henk("Hank");
	ScavTrap	harry("Harry");
	ScavTrap	anonymous;

	brigitte.status();
	henk.status();
	harry.status();
	anonymous.status();
	henk.attack("Brigitte");
	henk.attack("Troy");
	henk.beRepaired(24);
	henk.status();
	brigitte.takeDamage(20);
	brigitte.attack("Henk");
	brigitte.status();
	anonymous.guardGate();
	harry.attack("Henk");
	henk.takeDamage(20);
	harry.status();
	harry.beRepaired(2);
	harry.status();
}