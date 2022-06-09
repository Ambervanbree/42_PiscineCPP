/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:27:05 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/09 17:18:55 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
# include <functional>
# include <time.h>

# define RESET   "\033[0m"
# define GREEN	 "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define CYAN    "\033[36m"
# define RED     "\033[31m"
# define MAGENTA "\033[35m"
# define LINE    "\033[4m"
# define BOLD    "\e[1m"

class Span{
	private:
		std::vector<int>	_array;
		unsigned int		_max;
		Span(void);
		
	public:
		Span(const Span & inst);
		Span(unsigned int n);
		Span(unsigned int n, std::vector<int>::iterator it);
		~Span(void);
		Span & operator =(const Span & inst);
		
		void	addNumber(int n);
		// void	addRange(unsigned int const n);
		int		shortestSpan();
		int		longestSpan();
		void	printArray(void);

	class maxNumberReached : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class noSpanCanBeFound : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

void	print(int n);

#endif
