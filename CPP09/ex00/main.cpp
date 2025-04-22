/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:29:32 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 13:47:01 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, const char **argv)
{
	BitcoinExchange	bitCoinExchange;

	if (argc != 2 || !argv[1])
	{
		std::cerr << ERROR "Usage: ./btc <wallet_file>" << std::endl;
		return (-1);
	}

	try
	{
		bitCoinExchange.loadDB();
		bitCoinExchange.loadWallet(argv[1]);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
