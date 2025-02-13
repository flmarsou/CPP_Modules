/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:41:00 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 14:16:04 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define GRAY	"\e[30m"
# define RESET	"\e[0m"

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const int nbr);
		Fixed(const float flt);
		Fixed(const Fixed &copy);

		// Operators
		Fixed	&operator=(const Fixed &other);

		// Destructors
		~Fixed();

		// Methods
		float	toFloat() const;
		int		toInt() const;

	private:
		int					_number;
		static const int	_number_bits_fraction = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
