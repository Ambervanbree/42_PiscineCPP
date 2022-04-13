/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:32:10 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 14:37:52 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]){
	if (argc != 4){
		std::cout << "Error! Expected usage: ./replace < infile > < string1 > < string2 >" << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	if (ifs.is_open()){
		std::string 	string = argv[1];
		string.append(".replace");
		std::ofstream	ofs(string.c_str());
		if (ofs.is_open()){
			std::string		line;
			while (getline(ifs, line)){
				if (!line.compare(argv[2]))
					ofs << argv[3] << std::endl;
				else 
					ofs << line << std::endl;
			}
		}
		else {
			std::cout << "Error! Out file could not be opened." << std::endl;
			ifs.close();
			return (1);
		}	
		ofs.close();
	}
	else {
		std::cout << "Error! In file could not be opened." << std::endl;
		return (1);
	}
	ifs.close();
	return (0);
}
