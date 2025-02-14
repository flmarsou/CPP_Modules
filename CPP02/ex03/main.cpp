/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:09:30 by flmarsou          #+#    #+#             */
/*   Updated: 2025/02/14 12:14:36 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	tester(const Point a, const Point b, const Point c, const Point point)
{
	if (bsp(a, b, c, point))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
}

int	main()
{
	/**
	 * Positive Triangle
	 * Y
	 * 5
	 * 4
	 * 3
	 * 2     B
	 * 1
	 * 0 A       C
	 *   0 1 2 3 4 5 X
	 */
	const Point	a(0, 0);
	const Point	b(2, 2);
	const Point	c(4, 0);

	tester(a, b, c, Point(2, 1));	// Inside
	tester(a, b, c, Point(0, 0));	// On a corner
	tester(a, b, c, Point(1, 1));	// On the edge
	tester(a, b, c, Point(-1, 0));	// Outside

	/**
	 *  Negative Triangle
	 *  Y
	 *  0     C          A
	 * -1
	 * -2           B
	 * -3
	 * -4
	 * -5
	 *    -5 -4 -3 -2 -1 0 X
	 */
	const Point	d(0, 0);
	const Point	e(-2, -2);
	const Point	f(-4, 0);

	tester(d, e, f, Point(-2, -1));	// Inside
	tester(d, e, f, Point(0, 0));	// On a corner
	tester(d, e, f, Point(-1, -1));	// On the edge
	tester(d, e, f, Point(1, 0));	// Outside

	return (0);
}
