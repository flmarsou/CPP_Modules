/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:46:10 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 13:52:17 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Account::Account(int initial_deposit)
	:	_accountIndex(getNbAccounts()), _amount(initial_deposit),
		_nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;

	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

// ========================================================================== //
//   Getters                                                                  //
// ========================================================================== //

// Returns the total number of accounts.
int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

// Returns the total amount of money across all accounts.
int	Account::getTotalAmount()
{
	return (_totalAmount);
}

// Returns the total number of deposits across all accounts.
int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

// Returns the total number of withdrawals across all accounts.
int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

// An utility function to display timestamps.
void	Account::_displayTimestamp()
{
	time_t		timestamp = time(0);
	struct tm	datetime = *localtime(&timestamp);
	char		output[14];

	std::strftime(output, sizeof(output), "%Y%m%d_%H%M%S", &datetime);
	std::cout << "[" << output << "] ";
}

// Displays overall account statistics.
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

// Adds money to the account.
void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	this->_totalAmount += deposit;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

// Tries to withdraw money from the account (checks if the balance is sufficient).
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	if (this->_amount > withdrawal)
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";

		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;

		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}

// Returns the current amount in the account (unused).
int		Account::checkAmount() const
{
	return (this->_amount);
}

// Displays the status of the account (balance, deposits, withdrawals).
void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
