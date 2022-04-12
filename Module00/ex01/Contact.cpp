#include "Contact.hpp"

Contact::Contact(void){
//	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void){
//	std::cout << "Contact destructor called" << std::endl;
}

void Contact::setFirstName(std::string input){
	this->_FirstName = input;
}

void Contact::setLastName(std::string input){
	this->_LastName = input;
}

void Contact::setNickName(std::string input){
	this->_NickName = input;
}

void Contact::setPhoneNumber(std::string input){
	this->_PhoneNumber = input;
}

void Contact::setDarkestSecret(std::string input){
	this->_DarkestSecret = input;
}

std::string Contact::getFirstName(void) const{
	return this->_FirstName;
}

std::string Contact::getLastName(void) const{
	return this->_LastName;
}

std::string Contact::getNickName(void) const{
	return this->_NickName;
}

std::string Contact::getPhoneNumber(void) const{
	return this->_PhoneNumber;
}

std::string Contact::getDarkestSecret(void) const{
	return this->_DarkestSecret;
}
