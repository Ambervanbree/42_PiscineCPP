/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:19:40 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/07 18:42:59 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>

# define RESET	"\033[0m"
# define BOLD	"\e[1m"

class notFound : public std::exception{
	public:
		virtual const char* what() const throw(){
			return "Value not found";
		}
};

template <typename T>
typename T::iterator	easyfind(T container, int n){
	typename T::iterator location;
	
	location = std::find(container.begin(), container.end(), n);
	if (location == container.end())
		throw notFound();
	return location;
}

#endif