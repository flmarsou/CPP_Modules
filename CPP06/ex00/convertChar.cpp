/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:20:23 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/09 17:40:03 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isChar(const std::string &input)
{
	const long	temp = std::strtol(input.c_str(), NULL, 10);

	if (input.length() <= 1)
		return (true);
	else if (temp == 0)
		return (false);
	else if (temp >= CHAR_MIN && temp <= CHAR_MAX)
		return (true);
	return (false);
}

void	castToChar(const std::string &input)
{
	char			c;
	if (!std::isdigit(input[0]) && std::isprint(input[0]) && input.length() == 1)
		c = input[0];
	else
		c = std::strtol(input.c_str(), NULL, 10);
	const int		i = static_cast<int>(c);
	const float		f = static_cast<float>(c);
	const double	d = static_cast<double>(c);

	std::cout << std::fixed << std::setprecision(1);
	if (std::isprint(c))
		std::cout << CHAR "'" << c << "'" << std::endl;
	else
		std::cout << CHAR "Non Displayable" << std::endl;
	std::cout << INT << i << std::endl;
	std::cout << FLOAT << f << "f" << std::endl;
	std::cout << DOUBLE << d << std::endl;
}
