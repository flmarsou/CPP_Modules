/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:02:45 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/02 13:28:58 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

void	Contact::setFirstName(std::string firstName) { this->_first_name = firstName; }

void	Contact::setLastName(std::string lastName) { this->_last_name = lastName; }

void	Contact::setNickname(std::string nickname) { this->_nickname = nickname; }

void	Contact::setPhoneNumber(std::string phoneNumber) { this->_phone_number = phoneNumber; }

void	Contact::setDarkestSecret(std::string darkestSecret) { this->_darkest_secret = darkestSecret; }

static void	truncSearch(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "║";
	else
		std::cout << std::setw(10) << str  << "║";
}

void	Contact::printSearch(unsigned int index)
{
	// Index
	std::cout << "║" << std::setw(10) << index << "║";
	truncSearch(this->_first_name);
	truncSearch(this->_last_name);
	truncSearch(this->_nickname);
	std::cout << "\n";
}

void	Contact::printContact()
{
	std::cout << "First Name: " << this->_first_name << "\n";
	std::cout << "Last Name: " << this->_last_name << "\n";
	std::cout << "Nickname: " << this->_nickname << "\n";
	std::cout << "Phone Number: " << this->_phone_number << "\n";
	std::cout << "Darkest Secret: " << this->_darkest_secret << "\n";
}
