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

#include "Karen.hpp"

int main(int argc, char *argv[]){
	Karen	Karen;

	if (argc != 2){
		std::cerr << "I'm not even going to listen to her today!" << std::endl;
		return (1);
	}
	Karen.setFilter(argv[1]);
	Karen.complain("WARNING");
	Karen.complain("DEBUG");
	Karen.complain("SILENCE");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("Some more BS");
}