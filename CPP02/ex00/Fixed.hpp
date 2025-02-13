/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:42:01 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 14:29:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define GRAY	"\e[30m"
# define RESET	"\e[0m"

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);

		// Operators
		Fixed 	&operator=(const Fixed &other);

		// Destructors
		~Fixed();

		// Setters
		void	setRawBits(const int raw);

		// Getters
		int		getRawBits();

	private:
		int					_number;
		static const int	_number_bits_fraction = 8;
};

#endif
