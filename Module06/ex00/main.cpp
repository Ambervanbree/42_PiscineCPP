/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:12:06 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/01 15:12:55 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	handleNumeric(char *argument, t_data *data){
	int i = 0;
	int period = 0;
	int fl = 0;
	
	for (; argument[i]; i++){
		if (argument[i] == '.')
			period++;
		else if (argument[i] == 'f')
			fl++;		
		else if (!(isdigit(argument[i]) || argument[i] == '-'))
			period += 10;
	}

	if (fl > 1 || (fl == 1 && argument[i - 1] != 'f'))
		return false;
	
	switch (period){
		case 0:
			setInt(argument, data);
			return true;
		case 1:
			if (fl == 1)
				setFloat(argument, data);
			else
				setDouble(argument, data);
			return true;
		default:
			return false;
	}
	
}

bool	handleExceptions(std::string argument, t_data *data){
	if (argument == "nanf" || argument == "+inff" || argument == "-inff"){
		setFloat(argument.c_str(), data);
		return true ;
	}
	if (argument == "nan" || argument == "+inf" || argument == "-inf"){
		setDouble(argument.c_str(), data);
		return true ;
	}
	return false ;
}

int		main(int argc, char *argv[]){
	if (argc != 2){
		std::cerr << "Wrong number of arguments. Usage: ./convert <argument>" << std::endl;
		return 1;
	}

	t_data		data;
	std::string	argument = argv[1];

	if (std::atoi(argv[1]) || argument[0] == '0'){
		if (!handleNumeric(argv[1], &data))
			setWrongArgument(&data);
	}
	else if (argument.size() == 1)
		setChar(argument[0], &data);
	else{
		if (!handleExceptions(argv[1], &data))
			setWrongArgument(&data);
	}
	display(data);
}
