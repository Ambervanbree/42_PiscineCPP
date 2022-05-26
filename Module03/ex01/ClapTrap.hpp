/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:42:01 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 11:21:29 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

# define RESET   "\033[0m"
# define CYAN    "\033[36m"
# define RED     "\033[31m" 
# define GREEN	 "\033[32m"

class ClapTrap{
	protected:
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