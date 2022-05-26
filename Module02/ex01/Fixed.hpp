/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:43:05 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/09 14:43:06 by avan-bre         ###   ########.fr       */
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
		Fixed(const int n);
		Fixed(const float fp);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const &inst);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs);

#endif