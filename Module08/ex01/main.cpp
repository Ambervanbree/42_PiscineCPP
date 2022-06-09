/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:06:42 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/09 17:23:04 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int generator(){
	static int i;
	return i++;
}

int generatorRandom(){
	return rand();
}

int main(void){	
	std::cout << BOLD << "Creating a span, adding numbers and using the copy constructor: " << RESET << std::endl << std::endl;
	Span	Span1(5);
	Span1.addNumber(3);
	Span1.addNumber(-1);
	Span1.addNumber(30);
	Span1.addNumber(10);

	Span	Span2(Span1);
	Span1.addNumber(-100);
	Span2.addNumber(-2);
	Span1.addNumber(5);
	Span2.addNumber(5);

	Span	Span3(0);
	Span3.addNumber(5);
	
	std::cout << std::endl << "Span 1: "; Span1.printArray();
	std::cout << "Span 2: "; Span2.printArray();
	std::cout << "Span 3: "; Span3.printArray();
	
	try{
		std::cout << std::endl << BOLD << "Finding the shortest and longest spans: " << RESET << std::endl << std::endl;	
		std::cout << "Shortest span is: " << Span1.shortestSpan() << std::endl;
		std::cout << "Shortest span is: " << Span2.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << Span1.longestSpan() << std::endl;
		std::cout << "Longest span is: " << Span2.longestSpan() << std::endl;
		std::cout << std::endl << BOLD << "Not possible with a span shorter than 2: " << RESET << std::endl << std::endl;
		std::cout << "Shortest span is: " << Span3.shortestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << BOLD << "Creating an array of 10.000 random elements and finding the shortest and longest span: " << RESET << std::endl << std::endl;	
	{
		std::vector<int>	vector(10000);
		srand (time(NULL));
		generate(vector.begin(), vector.end(), generatorRandom);

		Span	Span4(10000, vector.begin());
		std::cout << "Longest span is: " << Span4.longestSpan() << std::endl;
		std::cout << "Shortest span is: " << Span4.shortestSpan() << std::endl;
	}

	std::cout << std::endl << BOLD << "Creating an array of 10.000 adjacents elements starting at 0 and finding the shortest and longest span: " << RESET << std::endl << std::endl;	
	{
		std::vector<int>	vector(10000);
		generate(vector.begin(), vector.end(), generator);
		Span	Span4(10000, vector.begin());
		std::cout << "Longest span is: " << Span4.longestSpan() << std::endl;
		std::cout << "Shortest span is: " << Span4.shortestSpan() << std::endl;
	}
}

