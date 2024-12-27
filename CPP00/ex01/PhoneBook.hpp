/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:56:01 by flmarsou          #+#    #+#             */
/*   Updated: 2024/12/27 15:32:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>

# define ITALIC	"\e[3m"
# define GREEN	"\e[32m"
# define RESET	"\e[0m"

class PhoneBook
{
	public:
		bool	addContact();
		bool	searchContact();
};

#endif
