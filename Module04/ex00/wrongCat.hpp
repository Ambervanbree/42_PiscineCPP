/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:56 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 11:45:14 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal{
	public:
		wrongCat(void);
		wrongCat(const wrongCat &inst);
		~wrongCat(void);

		void makeSound(void) const;
};

#endif