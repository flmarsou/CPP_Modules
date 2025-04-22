/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:40:21 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 15:15:57 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	(void)other;
}

BitcoinExchange::~BitcoinExchange()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

// Database: Parsing & Storing
// ---------------------------

static void	throwError(const char *error, std::ifstream &file)
{
	file.close();
	throw (std::runtime_error(error));
}

static bool	isValueCorrect(const std::string &value)
{
	char			*end;
	const double	d = std::strtod(value.c_str(), &end);

	if (std::isinf(d) || *end != '\0')
		return (false);

	if (d < 0)
		return (false);

	return (true);
}

static bool	isDateCorrect(const std::string &date)
{
	const int	year = atoi(date.substr(0, 4).c_str());
	const int	month = atoi(date.substr(5, 2).c_str());
	const int	day = atoi(date.substr(8, 2).c_str());

	// Checks if year format is "YYYY-", and higher than 2009
	for (unsigned int i = 0; i < 4; i++)
		if (!isdigit(date[i]))
			return (false);
	if (year < 2009)
		return (false);
	if (date[4] != '-')
		return (false);

	// Checks if month format is "MM-", and between 01-12
	for (unsigned int i = 5; i < 7; i++)
		if (!isdigit(date[i]))
			return (false);
	if (month < 1 || month > 12)
		return (false);
	if (date[7] != '-')
		return (false);

	// Checks if day format is "DD", between 01-31, 30~31-day months, and leap years.
	for (unsigned int i = 8; i < 10; i++)
		if (!isdigit(date[i]))
			return (false);
	if (day < 1 || day > 31)
		return (false);
	if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
		return (false);
	if (month == 2 && ((year % 4 == 0 && day > 29) || (year % 4 != 0 && day > 28)))
		return (false);

	return (true);
}

void	BitcoinExchange::loadDB()
{
	std::ifstream	file;
	std::string		line;
	std::string		date;
	std::string		value;

	// Opens the file
	file.open("data.csv");
	if (!file.is_open())
		throw (std::runtime_error(ERROR"Failed to open CSV file!"));

	// Checks the header
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throwError(ERROR"Wrong header syntax in CSV file!", file);

	// Checks and stores date/value
	while (std::getline(file, line))
	{
		// Date
		date = line.substr(0, 10);
		if (date.size() < 10 || !isDateCorrect(date))
			throwError(ERROR"Wrong date syntax in CSV file!", file);

		// Separator
		if (!line[10] && line[10] != ',')
			throwError(ERROR"Wrong separator syntax in CSV file!", file);

		// Value
		value = line.substr(11);
		if (value.empty() || !isValueCorrect(value))
			throwError(ERROR"Wrong value syntax in CSV file!", file);

		// Duplicate
		if (this->_db.find(date) != this->_db.end())
			throwError(ERROR"Found duplicate in CSV file!", file);

		// Store
		this->_db[date] = std::strtod(value.c_str(), NULL);
	}

	file.close();
}

// Wallet: Parsing & Storing
// -------------------------

static void	printValue(const std::string &date, const double &value, const std::map<std::string, double> &db)
{
	std::map<std::string, double>::const_iterator	it;

	it = db.lower_bound(date);

	if (it != db.begin() && it->first > date)
		it--;

	std::cout << OK << it->first << " => " << value << " = " << value * it->second << std::endl;
}

void	BitcoinExchange::loadWallet(const char *filePath) const
{
	std::ifstream	file;
	std::string		line;
	std::string		date;
	std::string		sep;
	std::string		value;
	double			d;

	// Opens the file
	file.open(filePath);
	if (!file.is_open())
		throw (std::runtime_error(ERROR"Failed to open Wallet file!"));

	// Checks the header
	std::getline(file, line);
	if (line != "date | value")
		throwError(ERROR"Wrong header syntax in Wallet file!", file);

	// Checks and stores date/value
	while (std::getline(file, line))
	{
		// Date
		date = line.substr(0, 10);
		if (date.size() < 10 || !isDateCorrect(date))
		{
			std::cerr << KO "Bad date input => " << date << std::endl;
			continue ;
		}

		// Separator
		sep = line.substr(10, 3);
		if (sep != " | ")
		{
			std::cerr << KO "Bad seperator input => \"" << sep << "\"" << std::endl;
			continue ;
		}

		// Value (0-1000)
		value = line.substr(13);
		if (value.empty() || !isValueCorrect(value))
		{
			std::cerr << KO "Bad value input => " << value << std::endl;
			continue ;
		}
		d = std::strtod(value.c_str(), NULL);
		if (d > 1000)
		{
			std::cerr << KO "Value is too large => " << value << std::endl;
			continue ;
		}

		printValue(date, d, this->_db);
	}

	file.close();
}
