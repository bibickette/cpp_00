/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:07:25 by phwang            #+#    #+#             */
/*   Updated: 2025/02/19 17:44:15 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::endl;

/* en gros les static on doit les declarer au debut */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	static int index = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;
	_accountIndex = index;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << index << ";amount:" << _amount << ";created" << endl;
	index++;
}

Account::~Account()
{
	static int index = 0;
	_displayTimestamp();
	cout << "index:" << index << ";amount:" << _amount << ";closed" << endl;
	index++;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts()
		 << ";total:" << getTotalAmount()
		 << ";deposits:" << getNbDeposits()
		 << ";withdrawals:" << getNbWithdrawals()
		 << endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex
		 << ";amount:" << _amount
		 << ";deposits:" << _nbDeposits
		 << ";withdrawals:" << _nbWithdrawals
		 << endl;
}

void Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit
		<< ";amount:" << (_amount + deposit)
		<< ";nb_deposits:" << _nbDeposits
		<< endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	cout << "index:" << _accountIndex
		 << ";p_amount:" << _amount
		 << ";withdrawal:" ;
	if (checkAmount() - withdrawal >= 0) {
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		cout << withdrawal
			<< ";amount:" << (_amount - withdrawal)
			<< ";nb_withdrawals:" << _nbWithdrawals << endl;
		_amount -= withdrawal;
	}
	else { cout << "refused" << endl;
		return(false);
	}
	return(true);
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(0);
    std::tm    *timestamp = std::localtime(&now);
    char buff[20];
    
    std::strftime(buff, sizeof(buff), "[%Y%m%d_%H%M%S]", timestamp);
    std::cout << buff << " ";
}

int	Account::checkAmount( void ) const{ return(_amount); }

int Account::getNbAccounts(void) { return (_nbAccounts); }

int Account::getTotalAmount(void) { return (_totalAmount); }

int Account::getNbDeposits(void) { return (_totalNbDeposits); }

int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }