/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:05:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/02 10:33:46 by avan-bre         ###   ########.fr       */
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
	long double ld = std::strtold(argument, NULL);
	if (ld > std::numeric_limits<int>::max()){
			data->cString = "overflow";
			data->nString = "overflow";
			data->fString = "impossible";
			data->dString = "impossible";		
	}
	else if (ld < -std::numeric_limits<int>::max()){
			data->cString = "underflow";
			data->nString = "underflow";
			data->fString = "impossible";
			data->dString = "impossible";		
	}
	else{
		int n = ld;
		std::string nlit = argument;
		if (n < 0 || n > 255)
			data->cString = "impossible";
		else if (isprint(n))
			data->c = static_cast <char> (n);
		else
			data->cString = "non displayable";
		data->n = n;
		data->f = static_cast <float> (n);
		data->d = static_cast <double> (n);
	}
}

void	setFloat(const char *argument, t_data *data){
	long double ld = std::strtold(argument, NULL);

	if (ld > std::numeric_limits<float>::max()){
			data->cString = "overflow";
			data->nString = "overflow";
			data->fString = "overflow";
			data->dString = "impossible";		
	}
	else if (ld < -std::numeric_limits<float>::max()){
			data->cString = "underflow";
			data->nString = "underflow";
			data->fString = "underflow";
			data->dString = "impossible";		
	}
	else{
		float f = ld;
		if (f < 0 || f > 255)
			data->cString = "impossible";
		else if (isprint(f))
			data->c = static_cast <char> (f);
		else
			data->cString = "non displayable";
		if (f > std::numeric_limits<int>::max() || f < -std::numeric_limits<int>::max())
			data->nString = "impossible";
		else
			data->n = static_cast <int> (f);
		data->f = static_cast <float> (f);
		data->d = static_cast <double> (f);
	}

}

void	setDouble(const char *argument, t_data *data){
	long double ld = std::strtold(argument, NULL);

	if (ld > std::numeric_limits<double>::max()){
			data->cString = "overflow";
			data->nString = "overflow";
			data->fString = "overflow";
			data->dString = "overflow";		
	}
	else if (ld < -std::numeric_limits<double>::max()){
			data->cString = "underflow";
			data->nString = "underflow";
			data->fString = "underflow";
			data->dString = "underflow";		
	}
	else{
		double d = ld;
		if (d < 0 || d > 255)
			data->cString = "impossible";
		else if (isprint(d))
			data->c = static_cast <char> (d);
		else
			data->cString = "non displayable";
		if (d > std::numeric_limits<int>::max() || d < -std::numeric_limits<int>::max())
			data->nString = "impossible";
		else
			data->n = static_cast <int> (d);
		data->f = static_cast <float> (d);
		data->d = static_cast <double> (d);
	}
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
		std::cout << "int:    " << data.nString << std::endl;
	if (data.fString.empty())
		std::cout << "float:  " << std::setprecision(1) << std::fixed << data.f << "f" << std::endl;
	else
		std::cout << "float:  " << data.fString << std::endl;
	if (data.dString.empty())
		std::cout << "double: " << data.d << std::endl;
	else
		std::cout << "double: " << data.dString << std::endl;
}
