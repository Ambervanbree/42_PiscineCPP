/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:08 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/18 09:24:00 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class wrongAnimal{
	protected:
		std::string _type;
		std::string _sound;

	public:
		wrongAnimal(void);
		wrongAnimal(const wrongAnimal &inst);
		virtual ~wrongAnimal(void);
		wrongAnimal & operator =(wrongAnimal const &inst);

		std::string	getType(void) const;
		std::string	getSound(void) const;
		void makeSound(void) const;
};

#endif