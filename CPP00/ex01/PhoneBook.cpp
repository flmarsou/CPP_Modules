/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:56:45 by flmarsou          #+#    #+#             */
/*   Updated: 2024/12/27 15:38:50 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

bool	PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	// First Name
	std::cout << "Enter " << ITALIC << "First Name" << RESET << ": ";
	while (true)
	{
		if (!std::getline(std::cin, firstName))
			return (false);
		if (firstName.empty())
		{
			std::cout << ITALIC << "First Name" << RESET << " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Last Name
	std::cout << "Enter " << ITALIC << "Last Name" << RESET << ": ";
	while (true)
	{
		if (!std::getline(std::cin, lastName))
			return (false);
		if (lastName.empty())
		{
			std::cout << ITALIC << "Last Name" << RESET << " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Nickname
	std::cout << "Enter " << ITALIC << "Nickname" << RESET << ": ";
	while (true)
	{
		if (!std::getline(std::cin, nickname))
			return (false);
		if (nickname.empty())
		{
			std::cout << ITALIC << "Nickname" << RESET << " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Phone Number
	std::cout << "Enter " << ITALIC << "Phone Number" << RESET << ": ";
	while (true)
	{
		if (!std::getline(std::cin, phoneNumber))
			return (false);
		if (phoneNumber.empty())
		{
			std::cout << ITALIC << "Phone Number" << RESET << " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Darkest Secret
	std::cout << "Enter " << ITALIC << "Darkest Secret" << RESET << ": ";
	while (true)
	{
		if (!std::getline(std::cin, darkestSecret))
			return (false);
		if (darkestSecret.empty())
		{
			std::cout << ITALIC << "Darkest Secret" << RESET << " is empty, try again: ";
			continue ;
		}
		break ;
	}

	std::cout << GREEN << "Contact \"" + nickname + "\" Successfully Added!" << RESET << std::endl;

	return (true);
}

bool	PhoneBook::searchContact()
{
	std::cout << "| Index    | First    | Last     | Nick     |" << std::endl;
	// TODO: Complete the list of all Contacts
	// TODO: std::cin the index for detailed description of the Contact.
	return (true);
}
