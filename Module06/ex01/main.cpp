/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:49:34 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:42 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdint.h>

#define BOLD    "\e[1m"
#define NOBOLD  "\e[0m"

typedef struct s_data{
	char	c;
	int		n;
	float	f;
	double	d;
} Data;

uintptr_t serialize(Data* ptr){
	return reinterpret_cast <uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast <Data *> (raw);
}

int		main(void){
	Data		data;
	Data		*dataPTR;
	uintptr_t	raw;

	data.c = 	'c';
	data.n = 	42;
	data.f = 	42.0f;
	data.d =	42.0;

	std::cout << BOLD << "What is in my data structure?" << NOBOLD << std::endl
	<< "Char:   " << data.c << std::endl
	<< "Int:    " << data.n << std::endl
	<< "Float:  " << std::setprecision(1) << std::fixed << data.f << "f" << std::endl
	<< "Double: " << std::setprecision(1) << std::fixed << data.d << std::endl << std::endl;

	std::cout << BOLD << "Serializing ......." << NOBOLD << std::endl << std::endl;
	raw = serialize(&data);

	std::cout << BOLD << "Now what is in my raw variable?" << NOBOLD << std::endl;
	std::cout << "Raw:    " << raw << std::endl << std::endl;

	std::cout << BOLD << "Deserializing ......." << NOBOLD << std::endl << std::endl;
	dataPTR = deserialize(raw);

	std::cout << BOLD << "What variables are added to my new data pointer?" << NOBOLD << std::endl
	<< "Char:   " << dataPTR->c << std::endl
	<< "Int:    " << dataPTR->n << std::endl
	<< "Float:  " << std::setprecision(1) << std::fixed << dataPTR->f << "f" << std::endl
	<< "Double: " << std::setprecision(1) << std::fixed << dataPTR->d << std::endl << std::endl;	
}
