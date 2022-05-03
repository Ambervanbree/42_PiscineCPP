/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:29:43 by avan-bre          #+#    #+#             */
/*   Updated: 2022/04/13 19:14:25 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.h"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):
_accountIndex(Account::_nbAccounts), 
_amount(initial_deposit){
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:"
	<< this->_accountIndex
	<< ";amount:"
	<< this->_amount
	<< ";created"
	<< std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:"
	<< this->_accountIndex
	<< ";amount:"
	<< this->_amount
	<< ";closed"
	<< std::endl;	
}

void	Account::_displayTimestamp( void ){
	std::time_t 	raw = std::time(0);
	struct tm 		*ltm = localtime(&raw);
	std::cout << std::setfill('0');
	std::cout << "["
	<< std::setw(4) << ltm->tm_year + 1900
	<< std::setw(2) << ltm->tm_mon + 1
	<< std::setw(2) << ltm->tm_mday
	<< "-"
	<< std::setw(2) << ltm->tm_hour
	<< std::setw(2) << ltm->tm_min
	<< std::setw(2) << ltm->tm_sec
	<< "] ";
}

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:"
	<< Account::_nbAccounts
	<< ";total:"
	<< getTotalAmount()
	<< ";deposits:"
	<< getNbDeposits()
	<< ";withdrawals:"
	<< getNbWithdrawals()
	<< std::endl;	
}

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount;
	if (this->checkAmount() >= withdrawal){
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
		return true;
	}
	else{
		std::cout << "withdrawal:refused" 
		<< std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const{
	return this->_amount;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}
