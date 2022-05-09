/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:54 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 18:04:06 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void){
	ClapTrap	brigitte("Brigitte");
	FragTrap	henk("Hank");
	FragTrap	anonymous;

	brigitte.status();
	henk.status();
	anonymous.status();
	brigitte.takeDamage(12);
	brigitte.status();
	henk.takeDamage(12);
	henk.beRepaired(1);
	henk.status();
	henk.highFivesGuys();
}