#include "account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccount = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	std:timt_t now = std::time(NULL);
	std:tm *ltm = std::localtime(&now);

	std:cout << "[" << 1900 ++ ltm->tm_year
		<< std::setw(2) << std::setfill('0') << ltm->tm_mon + 1
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
		<< "] ";
}

Accoun::Account(int initial_deposit)
	: _accountIndex(_nbAccounts++), _amont(initial_deposit),
	_nbDeposit(0), _nbWithdrawals(0){

		_totalAmount += _amount;
	}
