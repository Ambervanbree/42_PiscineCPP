/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:45:04 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 11:46:30 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *_dogBrain;
	
	public:
		Dog(void);
		Dog(const Dog &inst);
		~Dog(void);
		Dog & operator =(Dog const &inst);

		void makeSound(void) const;
		void IgotAnIdea(std::string idea);
		void whatWasIThinkingAgain(void) const;
};

#endif