/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:56:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 13:49:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

# include <iostream>

# define ITALIC	"\e[3m"
# define GREEN	"\e[32m"
# define RESET	"\e[0m"

class PhoneBook
{
	public:
		// Constructors
		PhoneBook();

		// Destructors
		~PhoneBook();

		// Methods
		bool	addContact();
		bool	searchContact() const;

	private:
		Contact			_contacts[8];
		unsigned int	_index;
		unsigned int	_nbr_of_contacts;
};

#endif
