/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:10:15 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/02 16:22:25 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iomanip>

# define BOLD    "\e[1m"
# define NOBOLD  "\e[0m"

template <typename T>
void	swap(T & x, T & y){
	T	temp;

	temp = x;
	x = y;
	y = temp;
	return ;
}

template <typename T>
T const	&max(T const & x, T const & y){
	return (x > y ? x : y);
}

template <typename T>
T const	&min(T const & x, T const & y){
	return (x < y ? x : y);
}

# endif