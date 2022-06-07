/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:19:11 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 15:21:07 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array{
	private: 
		T				*_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &inst);
		~Array(void);
		
		Array & operator =(const Array &inst);
		T & operator[](unsigned int i);

		T & getItem(unsigned int i) const;
		unsigned int getSize(void) const;
		void	displayArray(void);

	class outOfBoundsException : public std::exception{
		public:
			virtual const char* what() const throw();			
	};

};

#include "Array.tpp"

#endif