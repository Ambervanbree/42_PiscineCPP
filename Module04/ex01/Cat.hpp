/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:56 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 14:42:23 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *_catBrain;
	
	public:
		Cat(void);
		Cat(const Cat &inst);
		~Cat(void);
		Cat & operator =(Cat const &inst);

		void makeSound(void) const;
		void IgotAnIdea(std::string idea) const;
		void whatWasIThinkingAgain(void) const;
};

#endif