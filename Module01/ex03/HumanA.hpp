/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:31:36 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:31:37 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA{

	private:
		std::string	_name;
		Weapon		&_weaponREF;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void attack(void) const;
};

#endif