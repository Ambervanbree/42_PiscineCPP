/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:54 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 12:32:32 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap	brigitte("Brigitte");
	DiamondTrap	henk;

	brigitte.whoAmI();
	henk.whoAmI();
	brigitte.attack("nobody");
	brigitte.status();
}
