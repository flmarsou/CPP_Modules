/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:42:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/10 11:58:20 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define GRAY		"\e[30m"
# define RESET		"\e[0m"

class Fixed
{
	public:
		Fixed();								// Constructor
		Fixed(const Fixed &fixed);				// Copy Constructor
		Fixed 	&operator=(const Fixed &other);	// Assignment Operator
		~Fixed();								// Destructor
		int		getRawBits();
		void	setRawBits(const int raw);
	private:
		int					_number;
		static const int	_number_of_bytes = 8;
};

#endif
