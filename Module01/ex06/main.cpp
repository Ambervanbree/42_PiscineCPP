/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:07:14 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 18:16:10 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){
	Harl	Harl;

	if (argc != 2){
		std::cerr << "I'm not even going to listen to him today!" << std::endl;
		return (1);
	}
	Harl.setFilter(argv[1]);
	if (Harl.complain("DEBUG") == false){
		return 0;
	}
	if (Harl.complain("INFO") == false){
		return 0;
	}
	if (Harl.complain("WARNING") == false){
		return 0;
	}
	if (Harl.complain("ERROR") == false){
		return 0;
	}
}