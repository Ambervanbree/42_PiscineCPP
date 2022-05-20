/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:08:08 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 16:57:46 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain {
	private:
		std::string _ideas[100];
	
	public:
		Brain(void);
		Brain(const Brain &inst);
		~Brain(void);
		
		Brain & operator =(Brain const &inst);

		std::string retrieveIdea(int i) const;
		void setIdea(std::string idea);
};

#endif