#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int		Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposit:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}
Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::getNbAccounts();
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}
void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawl:";
	if (this->_amount - withdrawal > 0)
	{
		std::cout << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:"<< this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "Refused" << std::endl;
		return (false);
	}
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(0);
	std::tm* timePtr = std::localtime(&time);

	std::ostringstream oss;
	oss << "["
		<< (timePtr->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (timePtr->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << (timePtr->tm_mday)
		<< "_"		
		<< std::setw(2) << std::setfill('0') << (timePtr->tm_hour)
		<< std::setw(2) << std::setfill('0') << (timePtr->tm_min)
		<< std::setw(2) << std::setfill('0') << (timePtr->tm_sec)
		<< "]";
	std::cout << oss.str() << " ";
}