/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:41:00 by flmarsou          #+#    #+#             */
/*   Updated: 2025/01/14 09:57:24 by flmarsou         ###   ########.fr       */
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
		Fixed();
		Fixed(const int nbr);
		Fixed(const float flt);
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed &other);
		~Fixed();

		int		toInt() const;
		float	toFloat() const;
	private:
		int					_number;
		static const int	_number_bits_fraction = 8;
};

#endif
