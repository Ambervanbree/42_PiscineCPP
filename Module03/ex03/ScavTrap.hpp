/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:58 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 17:37:18 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:

	public:
 		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &inst);
		~ScavTrap(void);
		ScavTrap & operator =(ScavTrap const &inst); 
		void status(void) const;
		void attack(const std::string &target);
		void guardGate(void) const;
};

#endif