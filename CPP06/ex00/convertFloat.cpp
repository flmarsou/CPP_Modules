/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertFloat.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:12:45 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 15:41:04 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isFloat(const std::string &input)
{
	char			*end;
	const float		f = std::strtof(input.c_str(), &end);
	unsigned int	i;
	bool			foundDot;
	bool			foundFloat;

	i = 0;
	foundDot = false;
	foundFloat = false;
	while (i < input.length())
	{
		if ((foundDot && input[i] == '.') || (foundFloat && input[i] == 'f') || (foundFloat && input[i] == 'F'))
			return (false);
		if (input[i] == '.')
			foundDot = true;
		if (input[i] == 'f' || input[i] == 'F')
			foundFloat = true;
		i++;
	}
	if (std::isinf(f))
		return (false);
	if (!foundDot && !foundFloat && *end == '\0')
		return (true);
	if (foundDot && foundFloat && (*end == 'f' || *end == 'F'))
		return (true);
	return (false);
}

void	castToFloat(const std::string &input)
{
	char			c;
	int				i;
	const float		f = std::strtof(input.c_str(), NULL);
	const double	d = static_cast<double>(f);

	// Char
	if (f >= ' ' && f <= '~')
	{
		c = static_cast<char>(f);
		std::cout << CHAR "'" << c << "'" << std::endl;
	}
	else if (f >= MIN_CHAR && f <= MAX_CHAR)
		std::cout << CHAR "Non Displayable" << std::endl;
	else
		std::cout << CHAR "Overflow" << std::endl;
	// Int
	if (f >= MIN_INT && f <= MAX_INT)
	{
		i = static_cast<int>(f);
		std::cout << INT << i << std::endl;
	}
	else
		std::cout << INT "Overflow" << std::endl;
	// Float
	std::cout << FLOAT << f << "f" << std::endl;
	// Double
	std::cout << DOUBLE << d << std::endl;
}
