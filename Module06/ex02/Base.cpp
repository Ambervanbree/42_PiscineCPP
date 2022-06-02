/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:41:02 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/02 11:42:46 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void){
	std::cout << "Class Base instance created" << std::endl;
}

Base::~Base(void){
	std::cout << "Destructor class Base called" << std::endl;
}