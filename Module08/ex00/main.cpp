/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:32:01 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/08 15:48:13 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void){
	{
		std::vector<int>	vector;

		vector.push_back(5);
		vector.push_back(8);
		vector.push_back(-3);

		try{
			std::cout << BOLD << "Finding existing values in a vector: " << RESET << std::endl;
			easyfind(vector, -3);
			easyfind(vector, 8);
			std::cout << std::endl << BOLD << "Trying to find a non-existing value in a vector: " << RESET << std::endl;
			easyfind(vector, 12);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}	
	}
	{
		std::list<int> list;
		
		list.push_back(8);
		list.push_back(2);
		list.push_back(-10);
		
		try{
			std::cout << std::endl << BOLD << "Finding existing values in a list: " << RESET << std::endl;
			easyfind(list, -10);
			easyfind(list, 2);
			std::cout << std::endl << BOLD << "Trying to find a non-existing value in a list: " << RESET << std::endl;
			easyfind(list, 12);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}			
	}
	{
		std::deque<int> deque;

		deque.push_back(8);
		deque.push_back(2);
		deque.push_back(-10);

		try{
			std::cout << std::endl << BOLD << "Finding existing values in a deque: " << RESET << std::endl;
			easyfind(deque, -10);
			easyfind(deque, 2);
			std::cout << std::endl << BOLD << "Trying to find a non-existing value in a deque: " << RESET << std::endl;
			easyfind(deque, 12);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}			
	}


}