/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:41:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 15:03:02 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Fixed::Fixed()
	:	_number(0)
{
	std::cout << GRAY "Fixed Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const int nbr)
	:	_number(nbr << this->_number_bits_fraction)
{
	std::cout << GRAY "Fixed Int constructor called" RESET << std::endl;
}

Fixed::Fixed(const float flt)
	:	_number(roundf(flt * (1 << this->_number_bits_fraction)))
{
	std::cout << GRAY "Fixed Float constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
	:	_number(copy._number)
{
	std::cout << GRAY "Fixed Copy constructor called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Fixed			&Fixed::operator=(const Fixed &other)
{
	std::cout << GRAY "Fixed Copy assignment operator called" RESET << std::endl;
	this->_number = other._number;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Fixed::~Fixed()
{
	std::cout << GRAY "Fixed Destructor called" RESET << std::endl;
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

// Converts the fixed-point value to a floating-point value.
float	Fixed::toFloat() const
{
	return ((float)this->_number / (1 << this->_number_bits_fraction));
}

// Converts the fixed-point value to an integer value.
int		Fixed::toInt() const
{
	return (this->_number >> this->_number_bits_fraction);
}
