/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:08:08 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 09:09:03 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain {
	public:
		Brain(void);
		Brain(const Brain &inst);
		virtual ~Brain(void);
		Brain & operator =(Brain const &inst);			
};