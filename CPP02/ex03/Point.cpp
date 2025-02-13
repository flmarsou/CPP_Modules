/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:40:49 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 15:23:34 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

Point::Point()
	:	_x(0), _y(0)
{
	std::cout << GRAY "Point Default constructor called" RESET << std::endl;
}

Point::Point(const float x, const float y)
	:	_x(x), _y(y)
{
	std::cout << GRAY "Point Assignment constructor called" RESET << std::endl;
}

Point::Point(const Point &copy)
	:	_x(copy._x), _y(copy._y)
{
	std::cout << GRAY "Point Copy constructor called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Point	&Point::operator=(const Point &other)
{
	std::cout << GRAY "Point Copy assignment operator called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Destructors                                                              //
// ========================================================================== //

Point::~Point()
{
	std::cout << GRAY "Point Destructor called" RESET << std::endl;
}

// ========================================================================== //
//   Getters                                                                  //
// ========================================================================== //

Fixed	Point::getX() const
{
	return (this->_x);
}

Fixed	Point::getY() const
{
	return (this->_y);
}
