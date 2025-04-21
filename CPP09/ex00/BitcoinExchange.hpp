/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:34:27 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/21 14:03:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <fstream>
# include <iostream>
# include <cstdlib>
# include <cmath>
# include <map>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"
# define KO		"\e[31m[ KO ] \e[0m"
# define OK		"\e[32m[ OK ] \e[0m"

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
		std::map<std::string, double>	_db;
};
