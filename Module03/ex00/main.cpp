/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:42:25 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 14:42:26 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	harry("Harry");
	ClapTrap	henk("Henk");

	henk.attack("Harry");
	henk.attack("Troy");
	harry.attack("Henk");
	henk.status();
	henk.beRepaired(3);
	henk.status();
	harry.status();
	harry.takeDamage(15);
	harry.status();
	harry.beRepaired(2);
	harry.status();
}