/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:32:01 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 18:42:46 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void){
	std::list<int> list;
	
	list.push_back(8);
	list.push_back(25);
	list.push_back(-1);
	list.push_back(25);
	list.push_back(2);
	list.push_back(10);

	std::cout << BOLD << "Finding existing values in a list: " << RESET << std::endl;
	std::list<int>::iterator it;
	try{
		it = easyfind(list, 25);
		std::cout << "Value 25 found at: " << &(*it) << std::endl;
		it = easyfind(list, 8);
		std::cout << "Value 8 found at: " << &(*it) << std::endl;
		it = easyfind(list, 25);
		std::cout << "Value 25 found at: " << &(*it) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD << "Trying to find an non-existing value in a list: " << RESET << std::endl;
	try{
		it = easyfind(list, 108);
		std::cout << "Value found at: " << &it << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}