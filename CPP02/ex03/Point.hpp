/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:34:31 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/13 15:07:49 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);

		// Operators
		Point	&operator=(const Point &other);

		// Destructors
		~Point();

		// Getters
		Fixed	getX() const;
		Fixed	getY() const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
