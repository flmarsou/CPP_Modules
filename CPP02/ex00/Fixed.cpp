/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:48:07 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 15:01:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Fixed::Fixed()
	:	_number(0)
{
	std::cout << GRAY "Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
	:	_number(copy._number)
{
	std::cout << GRAY "Copy constructor called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << GRAY "Copy assignment operator called" RESET << std::endl;
	this->_number = other._number;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Fixed::~Fixed()
{
	std::cout << GRAY "Destructor called" RESET << std::endl;
}

// ========================================================================== //
//   Setters                                                                  //
// ========================================================================== //

void	Fixed::setRawBits(const int raw)
{
	this->_number = raw;
}

// ========================================================================== //
//   Getters                                                                  //
// ========================================================================== //

int		Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}
