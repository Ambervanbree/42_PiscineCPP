/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:29:54 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 10:29:55 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void){
//	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void){
//	std::cout << "PhoneBook destructor called" << std::endl;
}

int	PhoneBook::getCounter(void) const{
	return PhoneBook::_Counter;
}

std::string PhoneBook::InputPrompt(std::string Entry, int code) const{
	std::string input;
	std::cout << ">> Enter " << Entry << ": " << std::endl;
	getline(std::cin, input);
	while (input.empty()){
		if (code)
			std::cout << "! Empty field not allowed. Enter " << Entry << " (promiss I won't tell...): " << std::endl;
		else
			std::cout << "! Empty field not allowed. Enter " << Entry << ": " << std::endl;
		getline(std::cin, input);
	}
	return input;
}


void PhoneBook::AddContact(void){
	std::string	FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	FirstName = InputPrompt("first name", 0);
	LastName = InputPrompt("last name", 0);
	NickName = InputPrompt("nickname", 0);
	PhoneNumber = InputPrompt("phone number", 0);
	DarkestSecret = InputPrompt("darkest secret", 1);
	PhoneBook::_Entry[PhoneBook::getCounter() % 8].setFirstName(FirstName);
	PhoneBook::_Entry[PhoneBook::getCounter() % 8].setLastName(LastName);
	PhoneBook::_Entry[PhoneBook::getCounter() % 8].setNickName(NickName);
	PhoneBook::_Entry[PhoneBook::getCounter() % 8].setPhoneNumber(PhoneNumber);
	PhoneBook::_Entry[PhoneBook::getCounter() % 8].setDarkestSecret(DarkestSecret);
	_Counter++;
}

void PhoneBook::DisplayPhoneBook(void){
	if (this->getCounter() == 0)
		std::cout << "! PhoneBook has no entries yet." << std::endl;
	else{
		this->DisplayAll();
		int index;
		std::cout << ">> What index number do you want to see?" << std::endl;
		std::cin >> index;
		if (!std::cin || index < 1 || index > 8 || index > this->getCounter()){
			std::cout << "! Index does not exist." << std::endl;
		}
		else{
			this->DisplayEntry(index - 1);
		}
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
}

std::string	SizeCheck(std::string Input){
	if (Input.length() > 10)
	{
		Input.resize(9);;
		Input.append(".", 1);
	}
	return (Input);	
}

void PhoneBook::DisplayAll(void) const{
	std::string output;
	std::cout << "*********************************************" << std::endl;
	std::cout << "*Index     |First Name|Last Name |Nickname  *" << std::endl;
	std::cout << "*********************************************" << std::endl;
	for (int i = 0; i < this->getCounter() && i < 8; ++i){
		std::cout << "*" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << SizeCheck(this->_Entry[i].getFirstName()) << "|";
		std::cout << std::setw(10) << SizeCheck(this->_Entry[i].getLastName()) << "|";
		std::cout << std::setw(10) << SizeCheck(this->_Entry[i].getNickName()) << "*" << std::endl;
	}
	std::cout << "*********************************************" << std::endl;
}

void PhoneBook::DisplayEntry(int index) const{
	std::cout << "***** Contact Information *****" << std::endl;
	std::cout << "* First name:     " << this->_Entry[index].getFirstName() << std::endl;
	std::cout << "* Last name:      " << this->_Entry[index].getLastName() << std::endl;
	std::cout << "* Nickname:       " << this->_Entry[index].getNickName() << std::endl;
	std::cout << "* Phone number:   " << this->_Entry[index].getPhoneNumber() << std::endl;
	std::cout << "* Darkest secret: " << this->_Entry[index].getDarkestSecret() << std::endl;
	std::cout << "*******************************" << std::endl;
}

int PhoneBook::_Counter = 0;
