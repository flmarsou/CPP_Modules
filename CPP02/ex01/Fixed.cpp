/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:41:02 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/22 12:08:09 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Fixed::Fixed() : _number(0)
{
	std::cout << GRAY "Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << GRAY "Int constructor called" RESET << std::endl;
	this->_number = nbr << this->_number_bits_fraction;
}

Fixed::Fixed(const float flt)
{
	std::cout << GRAY "Float constructor called" RESET << std::endl;
	this->_number = roundf(flt * (1 << this->_number_bits_fraction));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << GRAY "Copy constructor called" RESET << std::endl;
	this->_number = copy._number;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Fixed			&Fixed::operator=(const Fixed &other)
{
	std::cout << GRAY "Copy assignment operator called" RESET << std::endl;
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
	std::cout << GRAY "Destructor called" RESET << std::endl;
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
