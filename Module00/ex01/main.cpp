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
#include "Contact.hpp"

int	main(void)
{
	PhoneBook 	pb;
	std::string	buffer;
	while (1){
		std::cout << ">> Enter your requested action (ADD/SEARCH/EXIT): " << std::endl;
		getline(std::cin, buffer);
		if (!buffer.compare("ADD"))
			pb.AddContact();
		else if (!buffer.compare("SEARCH"))
			pb.DisplayPhoneBook();
		else if (!buffer.compare("EXIT"))
			break ;
		else
			std::cout << "! Request not recognised." << std::endl;
	}
	return (0);
}
