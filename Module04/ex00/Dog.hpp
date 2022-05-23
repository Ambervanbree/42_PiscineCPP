/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:45:04 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 14:16:23 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		Dog(const Dog &inst);
		~Dog(void);
		Dog & operator =(Dog const &inst);

		void makeSound(void) const;
};

#endif