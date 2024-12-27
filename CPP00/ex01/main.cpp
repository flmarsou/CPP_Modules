/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:53:11 by flmarsou          #+#    #+#             */
/*   Updated: 2024/12/27 15:20:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string command;

	std::cout << "Welcome to the Awesome PhoneBook!\n" << std::endl;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nTerminated..." << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			if (!phoneBook.addContact())
			{
				std::cout << "\nTerminated..." << std::endl;
				break ;
			}
		}
		else if (command == "SEARCH")
		{
			if (!phoneBook.searchContact())
			{
				std::cout << "\nTerminated..." << std::endl;
				break ;
			}
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting..." << std::endl;
			break ;
		}
		else
			std::cout << "Command not found!\n" << std::endl;
	}
	return (0);
}
