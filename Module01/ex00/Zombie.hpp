/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:30:50 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:30:51 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(std::string Name);
		~Zombie();

		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif