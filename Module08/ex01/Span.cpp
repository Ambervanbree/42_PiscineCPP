/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:27:12 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/09 17:00:25 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _max(n) {}

Span::Span(unsigned int n, std::vector<int>::iterator it) : _max(n){
	while (this->_max > this->_array.size())
	{
		this->addNumber(*it);
		it++;
	}
}

Span::Span(const Span & inst){
	*this = inst;
	return ;
}

Span::~Span(void) {}

Span & Span::operator =(const Span & inst){
	this->_array = inst._array;
	this->_max = inst._max;
	return *this;
}

void Span::addNumber(int n){
	try{
		if (this->_max == this->_array.size())
			throw Span::maxNumberReached();
		else
			this->_array.push_back(n);	
	}
	catch (std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return ;
}

int Span::shortestSpan(){
	if (this->_array.size() <= 1)
		throw Span::noSpanCanBeFound();
		
	std::vector<int>	Sorted(this->_array);
	std::vector<int>	Diff(this->_max);
	
	sort(Sorted.begin(), Sorted.end());
	adjacent_difference(Sorted.begin(), Sorted.end(), Diff.begin());
	return *min_element(Diff.begin() + 1, Diff.end());
}

int Span::longestSpan(){
	if (this->_max <= 1)
		throw Span::noSpanCanBeFound();
	
	std::vector<int>	Sorted(this->_array);
	sort(Sorted.begin(), Sorted.end());
	return *(Sorted.end() - 1) - *Sorted.begin();
}

void	Span::printArray(void){
	for_each(this->_array.begin(), this->_array.end(), print);
	std::cout << std::endl;
}

const char* Span::maxNumberReached::what() const throw(){
	return "Maximum number of ints in array has been reached.";
}

const char* Span::noSpanCanBeFound::what() const throw(){
	return "No span can be found, array is not big enough.";
}

void	print(const int n){
	std::cout << n << " ";
}
