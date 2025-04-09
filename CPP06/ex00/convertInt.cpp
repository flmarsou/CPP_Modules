/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertInt.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:28:18 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/09 17:40:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isInt(const std::string &input)
{
	const long		temp = std::strtol(input.c_str(), NULL, 10);
	unsigned int	i;

	if (temp < INT_MIN || temp > INT_MAX)
		return (false);
	i = 0;
	if (input[0] == '-')
		i++;
	while (i < input.length())
	{
		if (std::isdigit(input[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

void	castToInt(const std::string &input)
{
	char			c;
	const int		i = std::strtol(input.c_str(), NULL, 10);
	const float		f = static_cast<float>(i);
	const double	d = static_cast<double>(i);

	if (std::isprint(i))
	{
		c = static_cast<char>(i);
		std::cout << CHAR "'" << c << "'" << std::endl;
	}
	else if (i <= CHAR_MIN && i >= CHAR_MAX)
		std::cout << CHAR "Non Displayable" << std::endl;
	else
		std::cout << CHAR "Overflow" << std::endl;
	std::cout << INT << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << FLOAT << f << "f" << std::endl;
	std::cout << DOUBLE << d << std::endl;
}
