/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:34:27 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/18 15:35:31 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <map>
# include <fstream>
# include <cstdlib>
# include <cmath>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();

		BitcoinExchange	&operator=(const BitcoinExchange &other);

		void	loadDB();
		void	loadWallet(const char *filePath);

	private:
		std::map<std::string, float>	_db;
		std::map<std::string, float>	_wallet;
};
