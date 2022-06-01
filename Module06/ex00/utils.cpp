/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:05:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/01 15:17:03 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	setChar(const char c, t_data *data){
	data->c = c;
	data->n = static_cast <int> (c);
	data->f = static_cast <float> (c);
	data->d = static_cast <double> (c);
}

void	setInt(const char *argument, t_data *data){
	int n = std::atoi(argument);
	
	if (isprint(static_cast <char> (n)))
		data->c = static_cast <char> (n);
	else
		data->cString = "non displayable";
	data->n = static_cast <int> (n);
	data->f = static_cast <float> (n);
	data->d = static_cast <double> (n);
}

void	setFloat(const char *argument, t_data *data){
	float f = std::atof(argument);
	
	if (!isdigit(argument[0])){
		data->cString = "impossible";
		data->nString = "impossible";
	}
	else if (!isprint(static_cast <char> (f)))
		data->cString = "non displayable";
	data->c = static_cast <char> (f);
	data->n = static_cast <int> (f);
	data->f = static_cast <float> (f);
	data->d = static_cast <double> (f);
}

void	setDouble(const char *argument, t_data *data){
	double d = std::atof(argument);
	
	if (isprint(static_cast <char> (d)))
		data->c = static_cast <char> (d);
	else
		data->cString = "non displayable";
	data->n = static_cast <int> (d);
	data->f = static_cast <float> (d);
	data->d = static_cast <double> (d);
}

void	setWrongArgument(t_data *data){
	data->cString = "impossible";
	data->nString = "impossible";
	data->fString = "impossible";
	data->dString = "impossible";
}

void	display(t_data data){
	if (data.cString.empty())
		std::cout << "char:   '" << data.c << "'" << std::endl;
	else
		std::cout << "char:   " << data.cString << std::endl;
	if (data.nString.empty())
		std::cout << "int:    " << data.n << std::endl;
	else
		std::cout << "int:    " << data.cString << std::endl;
	if (data.fString.empty())
		std::cout << "float:  " << data.f << "f" << std::endl;
	else
		std::cout << "float:  " << data.fString << std::endl;
	if (data.nString.empty())
		std::cout << "double: " << data.d << std::endl;
	else
		std::cout << "double: " << data.dString << std::endl;
}
