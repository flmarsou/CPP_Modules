/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:02:45 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 13:35:44 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Contact::Contact()
	:	_first_name(""), _last_name(""), _nickname(""), _phone_number(""),
		_darkest_secret("")
{

}

// ========================================================================== //
//   Setters                                                                  //
// ========================================================================== //

void	Contact::setFirstName(std::string firstName)
{
	this->_first_name = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_last_name = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkest_secret = darkestSecret;
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Contact::~Contact()
{

}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

static void	truncSearch(std::string str)
{
	if (str.length() > 10)
	{
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "║";
	}
	else
	{
		std::cout << std::setw(10) << str  << "║";
	}
}

void	Contact::printSearch(unsigned int index) const
{
	std::cout << "║" << std::setw(10) << index << "║";

	truncSearch(this->_first_name);
	truncSearch(this->_last_name);
	truncSearch(this->_nickname);

	std::cout << std::endl;
}

void	Contact::printContact() const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}
