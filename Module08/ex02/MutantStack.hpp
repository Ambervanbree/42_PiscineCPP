/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:37:30 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/09 19:30:52 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack() {};

		
		MutantStack(const MutantStack<T> &inst) {
			*this = inst;
		};
		
		~MutantStack() {};
		
		MutantStack<T> & operator =(const MutantStack<T> & inst){
			this->c = inst.c;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin() {
			return this->c.begin();
		}

		iterator	end() {
			return this->c.end();
		}
};

#endif