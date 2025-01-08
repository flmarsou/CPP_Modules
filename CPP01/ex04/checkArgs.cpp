/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkArgs.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:15:18 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/08 14:38:55 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	checkArgc(int argc, const char **argv)
{
	switch (argc)
	{
		case 1:
			std::cerr << RED "[x] - Error:" RESET " Missing arguments!" << std::endl;
			std::cerr << BLUE "[i] - Usage:" RESET " ./sed <filename> <s1> <s2>" << std::endl;
			return (false);
		case 2:
			std::cerr << RED "[x] - Error:" RESET " Missing s1 and s2!" << std::endl;
			std::cerr << BLUE "[i] - Usage:" RESET " ./sed " << argv[1] << " <s1> <s2>" << std::endl;
			return (false);
		case 3:
			std::cerr << RED "[x] - Error:" RESET " Missing s2!" << std::endl;
			std::cerr << BLUE "[i] - Usage:" RESET " ./sed " << argv[1] << " " << argv[2] << " <s2>" << std::endl;
			return (false);
		default:
			if (argc > 4)
				std::cerr << PURPLE "[!] - Warning:" RESET " Too many arguments!" << std::endl;
			break ;
	}
	std::cout << GREEN << "[v] - Success:" RESET " Argument count valid!" << std::endl;
	return (true);
}

bool	checkArgv(const char **argv)
{
	if (argv[1][0] == '\0')
	{
		std::cerr << RED "[x] - Error:" RESET " Filename is empty!" << std::endl;
		return (false);
	}
	else if (argv[2][0] == '\0')
	{
		std::cerr << RED "[x] - Error:" RESET " s1 is empty!" << std::endl;
		return (false);
	}
	else if (argv[3][0] == '\0')
	{
		std::cerr << RED "[x] - Error:" RESET " s2 is empty!" << std::endl;
		return (false);
	}
	std::cout << GREEN << "[v] - Success:" RESET " Argument values valid!" << std::endl;
	return (true);
}
