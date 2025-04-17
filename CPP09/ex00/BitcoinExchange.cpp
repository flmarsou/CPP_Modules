/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:40:21 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/17 16:42:39 by flmarsou         ###   ########.fr       */
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
