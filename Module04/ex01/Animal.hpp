/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:08 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/20 11:03:34 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RESET   "\033[0m"
# define GREEN	 "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define CYAN    "\033[36m"
# define RED     "\033[31m"
# define MAGENTA "\033[35m"
# define BOLD    "\e[1m"
# define NOBOLD  "\e[0m"

# include <iostream>

class Animal{
	protected:
		std::string _type;
		std::string _sound;

	public:
		Animal(void);
		Animal(const Animal &inst);
		virtual ~Animal(void);
		virtual Animal & operator =(Animal const &inst);

		std::string	getType(void) const;
		void makeSound(void) const;
		virtual void IgotAnIdea(std::string idea) = 0;
		virtual void whatWasIThinkingAgain(void) const = 0;
};

#endif