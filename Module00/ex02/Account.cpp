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
#include <ctime>

Account::Account(int initial_deposit){
	this->_totalAmount = initial_deposit;
}

Account::~Account(void){
}

void	_displayTimestamp( void ){
	std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result));
}

int		Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ){
	return Account::_nbWithdrawals;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

void	Account::displayAccountsInfos( void ){

}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1	

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << "p_amount:" << this->_amount;
	std::cout << "deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "p_amount:" << this->_amount;
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << "p_amount:" << this->_amount;
	if (this->checkAmount() >= withdrawal){
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal;
		std::cout << "amount:" << this->_amount;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	}
	else{
		std::cout << "withdrawal:refused";
	}
	std::cout << std::endl;
}

int		Account::checkAmount( void ) const{
	return this->_amount;
}

// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0	

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "p_amount:" << this->_amount;
	std::cout << "amount:" << this->_amount;
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

