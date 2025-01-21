/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:53:11 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/21 10:07:52 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string command;

	std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║     Welcome to the Awesome PhoneBook!     ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;

	while (true)
	{
		std::cout << std::endl << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << std::endl << "Terminated..." << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			if (!phoneBook.addContact())
			{
				std::cout << std::endl << "Terminated..." << std::endl;
				break ;
			}
		}
		else if (command == "SEARCH")
		{
			if (!phoneBook.searchContact())
			{
				std::cout << std::endl << "Terminated..." << std::endl;
				break ;
			}
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting..." << std::endl;
			break ;
		}
		else
			std::cout << "Command not found!" << std::endl;
	}
	return (0);
}
