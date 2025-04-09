/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:28:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/09 16:34:13 by flmarsou         ###   ########.fr       */
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

void	ScalarConverter::convert(const std::string &input)
{
	if (isChar(input))
		castToChar(input);
	else if (isInt(input))
		castToInt(input);
	else
		std::cout << ERROR "Wrong Argument!" << std::endl;
}
