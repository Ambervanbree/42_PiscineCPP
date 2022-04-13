/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:29:29 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:29:34 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;}
	else {
		for (int i = 1; argv[i]; ++i){
			for(int j = 0; argv[i][j]; ++j){
				argv[i][j] = std::toupper(argv[i][j]);
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}
