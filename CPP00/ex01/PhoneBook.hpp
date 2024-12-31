/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:56:01 by flmarsou          #+#    #+#             */
/*   Updated: 2024/12/31 15:09:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>

# include "Contact.hpp"

# define ITALIC	"\e[3m"
# define GREEN	"\e[32m"
# define RESET	"\e[0m"

class PhoneBook
{
	public:
		// Constructor
		PhoneBook();
		// Methods
		bool	addContact();
		bool	searchContact();
	private:
		Contact			_contacts[8];
		unsigned int	_index;
		unsigned int	_nbr_of_contacts;
};

#endif
