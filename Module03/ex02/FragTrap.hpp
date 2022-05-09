/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:32:32 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 17:51:01 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:

	public:
 		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &inst);
		~FragTrap(void);
		FragTrap & operator =(FragTrap const &inst);
		void status(void) const;
		void highFivesGuys(void);
};

#endif