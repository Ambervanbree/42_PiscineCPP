/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:56 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/17 11:51:42 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat(void);
		Cat(const Cat &inst);
		~Cat(void);
		Cat & operator =(Cat const &inst);	
};

#endif