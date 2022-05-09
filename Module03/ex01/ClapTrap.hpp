/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:42:01 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 17:05:52 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
	private:
		std::string _Name;
		int	_Hit;
		int	_Energy;
		int	_Damage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &inst);
		~ClapTrap(void);
		ClapTrap & operator =(ClapTrap const &inst);
		void setName(std::string name);
		void setHitPoints(int points);
		void setEnergyLevel(int level);
		void setAttackDamage(int damage);
		std::string	getName() const;
		int	getHitPoints() const;
		int	getEnergyLevel() const;
		int	getAttackDamage() const;	
		void status(void) const;
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

std::ostream& bold_on(std::ostream& os);
std::ostream& bold_off(std::ostream& os);

#endif