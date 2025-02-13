/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:56:45 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 13:46:27 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

PhoneBook::PhoneBook()
	:	_index(0), _nbr_of_contacts(0)
{

}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

PhoneBook::~PhoneBook()
{

}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

bool	PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	// First Name
	std::cout << std::endl << "Enter " ITALIC "First Name" RESET ": ";
	while (true)
	{
		if (!std::getline(std::cin, firstName))
			return (false);
		if (firstName.empty())
		{
			std::cout << ITALIC "First Name" RESET " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Last Name
	std::cout << "Enter " ITALIC "Last Name" RESET ": ";
	while (true)
	{
		if (!std::getline(std::cin, lastName))
			return (false);
		if (lastName.empty())
		{
			std::cout << ITALIC "Last Name" RESET " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Nickname
	std::cout << "Enter " ITALIC "Nickname" RESET ": ";
	while (true)
	{
		if (!std::getline(std::cin, nickname))
			return (false);
		if (nickname.empty())
		{
			std::cout << ITALIC "Nickname" RESET " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Phone Number
	std::cout << "Enter " ITALIC "Phone Number" RESET ": ";
	while (true)
	{
		if (!std::getline(std::cin, phoneNumber))
			return (false);
		if (phoneNumber.empty())
		{
			std::cout << ITALIC "Phone Number" RESET " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Darkest Secret
	std::cout << "Enter " ITALIC "Darkest Secret" RESET ": ";
	while (true)
	{
		if (!std::getline(std::cin, darkestSecret))
			return (false);
		if (darkestSecret.empty())
		{
			std::cout << ITALIC "Darkest Secret" RESET " is empty, try again: ";
			continue ;
		}
		break ;
	}

	// Set Contact Variables
	_contacts[_index].setFirstName(firstName);
	_contacts[_index].setLastName(lastName);
	_contacts[_index].setNickname(nickname);
	_contacts[_index].setPhoneNumber(phoneNumber);
	_contacts[_index].setDarkestSecret(darkestSecret);
	std::cout << GREEN "Contact[" << _index << "] \"" << nickname << "\" Successfully Added!" RESET << std::endl;

	if (_index == 7)
		_index = 0;
	else
		_index++;

	if (_nbr_of_contacts < 8)
		_nbr_of_contacts++;

	return (true);
}

bool	PhoneBook::searchContact() const
{
	std::string		inputDigit;
	unsigned int	digit;

	if (_nbr_of_contacts == 0)
	{
		std::cout << std::endl << "No Contact Found!" << std::endl;
		return (true);
	}

	std::cout << std::endl << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
	std::cout << "║    ID    ║ Forename ║ Lastname ║ Nickname ║" << std::endl;
	std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
	for (unsigned int i = 0; i < _nbr_of_contacts; i++)
		_contacts[i].printSearch(i);
	std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;

	std::cout << "Enter an ID: ";
	while (true)
	{
		if (!std::getline(std::cin, inputDigit))
			return (false);
		if (inputDigit.empty())
		{
			std::cout << "ID is empty, try again: ";
			continue ;
		}
		if (inputDigit.length() > 1)
		{
			std::cout << "ID needs to be one character , try again: ";
			continue ;
		}
		if (!isdigit(inputDigit[0]))
		{
			std::cout << "ID needs to be a digit, try again: ";
			continue ;
		}
		digit = inputDigit[0] - '0';
		if (digit >= _nbr_of_contacts)
		{
			std::cout << "ID not found, try again: ";
			continue ;
		}
		break ;
	}
	std::cout << std::endl;
	_contacts[digit].printContact();
	return (true);
}
