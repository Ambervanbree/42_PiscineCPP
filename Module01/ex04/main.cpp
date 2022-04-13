/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:32:10 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 14:05:23 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int openWrite(std::ofstream	*ofs, char const *filename){
	(*ofs).open(filename, std::ofstream::out);
	if ((*ofs).is_open()){
		return (1);
	}
	else {
		std::cout << "Error! Out file could not be opened." << std::endl;
		return (0);
	}	
}

int	openRead(std::ifstream *ifs, char const *file){
	(*ifs).open(file, std::ifstream::in);
	if ((*ifs).is_open()){
		return (1);
	}
	else {
		std::cout << "Error! In file could not be opened." << std::endl;
		return (0);
	}
}

int main(int argc, char *argv[]){
	std::ifstream	ifs;
	std::ofstream	ofs;
	if (argc != 4){
		std::cout << "Error! Expected usage: ./replace < infile > < string1 > < string2 >" << std::endl;
		return (1);
	}
	if (!openRead(&ifs, argv[1]))
		return (1);
	if (!openWrite(&ofs, "outfile")){
		ifs.close();
		return (1);
	}
	std::string	line;
	while (getline(ifs, line)){
		if (!line.compare(argv[2]))
			ofs << argv[3] << std::endl;
		else 
			ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}
