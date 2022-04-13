/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:29:57 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:29:58 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <string>
# include <climits>

class PhoneBook{

	private:
		Contact		_Entry[8];
		int static	_Counter;
	
	public:

		//constructor and deconstructor
		PhoneBook(void);
		~PhoneBook(void);

		//phonebook manipulation methods
		int getCounter(void) const;
		void AddContact(void);
		std::string InputPrompt(std::string Entry, int code) const;
		void DisplayPhoneBook(void);
		void DisplayEntry(int index) const;
		void DisplayAll(void) const;
};

#endif