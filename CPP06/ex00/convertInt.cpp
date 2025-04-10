/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertInt.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:28:18 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 15:38:43 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isInt(const std::string &input)
{
	char			*end;
	const long		temp = std::strtol(input.c_str(), &end, 10);

	if (temp < MIN_INT || temp > MAX_INT || *end != '\0')
		return (false);
	return (true);
}

void	castToInt(const std::string &input)
{
	char			c;
	const int		i = std::strtol(input.c_str(), NULL, 10);
	const float		f = static_cast<float>(i);
	const double	d = static_cast<double>(i);

	std::cout << std::fixed << std::setprecision(1);

	// Char
	if (i <= ' ' && i >= '~')
	{
		c = static_cast<char>(i);
		std::cout << CHAR "'" << c << "'" << std::endl;
	}
	else if (i <= MIN_CHAR && i >= MAX_CHAR)
		std::cout << CHAR "Non Displayable" << std::endl;
	else
		std::cout << CHAR "Overflow" << std::endl;
	// Int
	std::cout << INT << i << std::endl;
	// Float
	std::cout << FLOAT << f << "f" << std::endl;
	// Double
	std::cout << DOUBLE << d << std::endl;
}
