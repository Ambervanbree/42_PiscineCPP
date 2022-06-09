/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:36:10 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/09 19:34:58 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void){
{
	std::cout << "ITERATOR ACTIONS WITH MUTANTSTACK: " << std::endl << std::endl; 
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);

	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
}	
{	
	std::cout << std::endl << "SAME ACTIONS WITH A LIST: " << std::endl << std::endl; 

	std::list<int> lst;
	
	lst.push_back(5);
	lst.push_back(17);

	std::cout << "top: " << lst.back() << std::endl;

	lst.pop_back();

	std::cout << "size: " << lst.size() << std::endl;
	
	lst.push_back(3);
	lst.push_back(5);

	lst.push_back(737);
	lst.push_back(0);
	
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	
	++lit;
	--lit;
	

	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

}
}
