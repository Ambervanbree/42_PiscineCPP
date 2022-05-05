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

bool	stockContent(std::string *buffer, std::string file){
	std::ifstream	ifs(file.c_str());
	std::string		line;

	if (ifs.is_open()){
		while (getline(ifs, line)){
			(*buffer).append(line);
			if (!ifs.eof()){
				(*buffer).append("\n");
			}
		}
		ifs.close();
		return true;
	}
	else{
		return false;
	}
}

void	replaceFunction(std::string *haystack, std::string needle, std::string replace){
	std::size_t address = (*haystack).find(needle);

	while (address != std::string::npos){
		(*haystack).erase(address, needle.size());
		(*haystack).insert(address, replace);
		address = (*haystack).find(needle, address + replace.size());
	}
}

bool	writeReplacement(std::string *buffer, std::string file){
	std::string		newFile = file;
	newFile.append(".replace");
	std::ofstream	ofs(newFile.c_str());

	if (ofs.is_open()){
		ofs << (*buffer);
		ofs.close();
		return true;
	}
	else {
		return false;
	}
}

int main(int argc, char *argv[]){
	if (argc != 4){
		std::cout << "Error! Expected usage: ./replace < infile > < string1 > < string2 >" << std::endl;
		return (1);
	}
	std::string	buffer;
	if (!stockContent(&buffer, argv[1])){
		return 1;
	}
	replaceFunction(&buffer, argv[2], argv[3]);
	if (!writeReplacement(&buffer, argv[1])){
		return 1;
	}
	return 0;
}
