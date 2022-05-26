/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:43:29 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 14:43:30 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
	private:
		int	_fixed;
		static const int _fract = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const &inst);
		int getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif