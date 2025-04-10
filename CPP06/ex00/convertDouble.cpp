/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertDouble.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:35:47 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 15:40:33 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isDouble(const std::string &input)
{
	char			*end;
	const double	d = std::strtod(input.c_str(), &end);

	if (std::isinf(d) || *end != '\0')
		return (false);
	else
		return (true);
}

void	castToDouble(const std::string &input)
{
	char			c;
	int				i;
	float			f;
	const double	d = std::strtod(input.c_str(), NULL);

	// Char
	if (d >= ' ' && d <= '~')
	{
		c = static_cast<char>(d);
		std::cout << CHAR "'" << c << "'" << std::endl;
	}
	else if (d >= MIN_CHAR && d <= MAX_CHAR)
		std::cout << CHAR "Non Displayable" << std::endl;
	else
		std::cout << CHAR "Overflow" << std::endl;
	// Int
	if (d >= MIN_INT && d <= MAX_INT)
	{
		i = static_cast<int>(d);
		std::cout << INT << i << std::endl;
	}
	else
		std::cout << INT "Overflow" << std::endl;
	// Float
	if (d >= MIN_FLOAT && d <= MAX_FLOAT)
	{
		f = static_cast<float>(d);
		std::cout << FLOAT << f << "f" << std::endl;
	}
	else
		std::cout << FLOAT "Overflow" << std::endl;
	// Double
	std::cout << DOUBLE << d << std::endl;
}
