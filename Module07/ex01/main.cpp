/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:38:16 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 09:38:16 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void){
	int		array[4] = {1, 2, 3, 4};

	std::cout << BOLD << "Using iter function to print int array, add one and print again in colour:" << RESET << std::endl;
	iter(array, 4, printItem);
	std::cout << std::endl;
	iter(array, 4, addOne);
	iter(array, 4, printItemColour);
	std::cout << std::endl;

	char		array2[6] = {'h', 'e', 'l', 'l', 'o', '!'};

	std::cout << BOLD << "Using iter function to print char array, add one and print again in colour:" << RESET << std::endl;
	iter(array2, 6, printItem);
	std::cout << std::endl;
	iter(array2, 6, addOne);
	iter(array2, 6, printItemColour);
	std::cout << std::endl;

	double		array3[3] = {2.5, -5.89, 0.13};

	std::cout << BOLD << "Using iter function to print double array, add one and print again in colour:" << RESET << std::endl;
	iter(array3, 3, printItem);
	std::cout << std::endl;
	iter(array3, 3, addOne);
	iter(array3, 3, printItemColour);
	std::cout << std::endl;
}
