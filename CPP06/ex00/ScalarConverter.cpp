/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:28:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 15:02:11 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter::~ScalarConverter()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

static bool	isMisc(const std::string &input)
{
	if (input == "+inf" || input == "+inff")
	{
		std::cout << CHAR "Impossible" << std::endl;
		std::cout << INT "Impossible" << std::endl;
		std::cout << FLOAT "+inff" << std::endl;
		std::cout << DOUBLE "+inf" << std::endl;
		return (true);
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << CHAR "Impossible" << std::endl;
		std::cout << INT "Impossible" << std::endl;
		std::cout << FLOAT "-inff" << std::endl;
		std::cout << DOUBLE "-inf" << std::endl;
		return (true);
	}
	else if (input == "nan" || input == "nanf")
	{
		std::cout << CHAR "Impossible" << std::endl;
		std::cout << INT "Impossible" << std::endl;
		std::cout << FLOAT "nanf" << std::endl;
		std::cout << DOUBLE "nan" << std::endl;
		return (true);
	}
	return (false);
}


void	ScalarConverter::convert(const std::string &input)
{
	if (isMisc(input))
		return ;
	else if (isChar(input))
		castToChar(input);
	else if (isInt(input))
		castToInt(input);
	else if (isFloat(input))
		castToFloat(input);
	else if (isDouble(input))
		castToDouble(input);
	else
		std::cout << ERROR "Wrong Argument!" << std::endl;
}
