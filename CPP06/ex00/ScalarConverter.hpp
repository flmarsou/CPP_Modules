/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:38:16 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/10 14:59:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <limits>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"

# define CHAR	"\e[32m[ CHAR   ]\e[0m -> "
# define INT	"\e[32m[ INT    ]\e[0m -> "
# define FLOAT	"\e[32m[ FLOAT  ]\e[0m -> "
# define DOUBLE	"\e[32m[ DOUBLE ]\e[0m -> "

# define MAX_CHAR	std::numeric_limits<char>::max()	// 127
# define MIN_CHAR	std::numeric_limits<char>::min()	// -128
# define MAX_INT	std::numeric_limits<int>::max()		// 2147483647
# define MIN_INT	std::numeric_limits<int>::min()		// -2147483648
# define MAX_FLOAT	std::numeric_limits<float>::max()	// 3.40282347e+38F
# define MIN_FLOAT	std::numeric_limits<float>::min()	// 1.17549435e-38F
# define MAX_DOUBLE	std::numeric_limits<double>::max()	// 1.7976931348623157e+308
# define MIN_DOUBLE	std::numeric_limits<double>::min()	// 2.2250738585072014e-308

class ScalarConverter
{
	public:
		static void	convert(const std::string &input);

	private:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter();

		// Operators
		ScalarConverter	&operator=(const ScalarConverter &other);
};

bool	isChar(const std::string &input);
void	castToChar(const std::string &input);

bool	isInt(const std::string &input);
void	castToInt(const std::string &input);

bool	isFloat(const std::string &input);
void	castToFloat(const std::string &input);

bool	isDouble(const std::string &input);
void	castToDouble(const std::string &input);
