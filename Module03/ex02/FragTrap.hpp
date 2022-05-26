/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:32:32 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/10 11:24:19 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
 		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &inst);
		~FragTrap(void);
		void status(void) const;
		void highFivesGuys(void);
};

#endif