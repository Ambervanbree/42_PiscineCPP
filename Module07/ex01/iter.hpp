/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:38:11 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 09:38:11 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\e[1m"

template<typename T>
void	addOne(T & elem) {
	T & elem2 = const_cast<T &>(elem);
	elem2 += 1;
}

template<typename T>
void	printItem(T & item){
	std::cout << item << std::endl;
	return ;
}

template<typename T>
void	printItemColour(T & item){
	std::cout << CYAN << item << RESET << std::endl;
	return ;
}

template <typename T>
void	iter(T *array, int size, void (*function)(T &)){
	for (int i = 0; i < size ; i++){
		function(array[i]);
	}
}

#endif