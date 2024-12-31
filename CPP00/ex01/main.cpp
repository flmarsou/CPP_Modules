/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:53:11 by flmarsou          #+#    #+#             */
/*   Updated: 2024/12/31 13:17:24 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string command;

	std::cout << "Welcome to the Awesome PhoneBook!\n\n";

	while (true)
	{
		std::cout << "\nEnter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nTerminated...\n";
			break ;
		}
		if (command == "ADD")
		{
			if (!phoneBook.addContact())
			{
				std::cout << "\nTerminated...\n";
				break ;
			}
		}
		else if (command == "SEARCH")
		{
			if (!phoneBook.searchContact())
			{
				std::cout << "\nTerminated...\n";
				break ;
			}
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting...\n";
			break ;
		}
		else
			std::cout << "Command not found!\n";
	}
	return (0);
}
