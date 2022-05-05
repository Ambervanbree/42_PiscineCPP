/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:54:15 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 17:55:21 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP
# include <iostream>
# include <string>

class Harl{

	private:
		int			_filter;
		std::string	_triggers[4];
		void _debug (void) const;
		void _info (void) const;
		void _warning (void) const;
		void _error (void) const;

	public:
		Harl(void);
		~Harl(void);

		bool complain(std::string level);
		void setFilter(std::string filter);
		int complainLevel(std::string level);
};

typedef	void(Harl::*whatNow)(void) const;

#endif