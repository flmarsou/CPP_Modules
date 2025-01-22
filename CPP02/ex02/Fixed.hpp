/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:10:34 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/22 14:37:26 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define GRAY		"\e[30m"
# define RESET		"\e[0m"

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const int nbr);
		Fixed(const float flt);
		Fixed(const Fixed &other);

		// Operators
		Fixed	&operator=(const Fixed &other);

		bool	operator>(const Fixed &other) const;	// Greater Than
		bool	operator<(const Fixed &other) const;	// Less Than
		bool	operator>=(const Fixed &other) const;	// Greater Than or Equal To
		bool	operator<=(const Fixed &other) const;	// Less Than or Equal To
		bool	operator==(const Fixed &other) const;	// Is Equal To
		bool	operator!=(const Fixed &other) const;	// Not Equal To

		Fixed	operator+(const Fixed &other) const;	// Addition
		Fixed	operator-(const Fixed &other) const;	// Subtraction
		Fixed	operator*(const Fixed &other) const;	// Multiplication
		Fixed	operator/(const Fixed &other) const;	// Division

		Fixed	operator++();							// Pre-Increment
		Fixed	operator++(int);						// Post-Increment
		Fixed	operator--();							// Pre-Decrement
		Fixed	operator--(int);						// Post-Decrement

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
