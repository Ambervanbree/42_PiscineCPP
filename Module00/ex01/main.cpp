/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:29:46 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:29:47 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	pb;
	std::string	buffer;
	int			stopper = 0;
	while (1){
		std::cout << ">> Enter your requested action (ADD/SEARCH/EXIT): " << std::endl;
		getline(std::cin, buffer);
		if (std::cin.eof())
			break ;
		if (!buffer.compare("ADD"))
			stopper = pb.AddContact();
		else if (!buffer.compare("SEARCH"))
			stopper = pb.DisplayPhoneBook();
		else if (!buffer.compare("EXIT"))
			break ;
		else
			std::cout << "! Request not recognised." << std::endl;
		if (stopper)
			break ;
	}
	return (0);
}
