/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:31:11 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:31:12 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{

	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();

		void	announce(void) const;
		void	setName(std::string input);
};

Zombie* zombieHorde(int N, std::string name);
