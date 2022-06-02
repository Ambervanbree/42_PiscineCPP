/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:12:06 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/02 13:00:12 by avan-bre         ###   ########.fr       */
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
			if (fl == 1)
				setFloat(argument, data);
			else
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
	std::cout << "test test" << std::endl;	
	if (argument == "nanf" || argument == "nan"){
		data->cString = "impossible";
		data->nString = "impossible";
		data->fString = "nanf";
		data->dString = "nan";
		return true ;
	}
	else if (argument == "+inf" || argument == "inf" || argument == "+inff" || argument == "inff"){
		data->cString = "impossible";
		data->nString = "impossible";
		data->fString = "inff";
		data->dString = "inf";
		return true ;
	}
	else if (argument == "-inf" || argument == "-inff"){
		data->cString = "impossible";
		data->nString = "impossible";
		data->fString = "-inff";
		data->dString = "-inf";
		return true ;
	}
	else
		return false ;
}

int		main(int argc, char *argv[]){
	if (argc != 2){
		std::cerr << "Wrong number of arguments. Usage: ./convert <argument>" << std::endl;
		return 1;
	}

	t_data		data;
	std::string	argument = argv[1];

	if (std::strtold(argv[1], NULL) || argument[0] == '0'){
		if (!handleExceptions(argument, &data))
			if (!handleNumeric(argv[1], &data))
				setWrongArgument(&data);
	}
	else if (argument.size() == 1)
		setChar(argument[0], &data);
	else
		setWrongArgument(&data);
	display(data);
}
