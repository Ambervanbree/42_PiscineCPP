/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:07:14 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 17:51:41 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(){
	Karen	Karen;
	Karen.complain("debug");
	Karen.complain("info");
	Karen.complain("warning");
	Karen.complain("error");
}