/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:38:16 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/09 16:50:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <cstdlib>

# define ERROR	"\e[31m[ ERROR ] - \e[0m"

# define CHAR	"\e[32m[ CHAR   ]\e[0m -> "
# define INT	"\e[32m[ INT    ]\e[0m -> "
# define FLOAT	"\e[32m[ FLOAT  ]\e[0m -> "
# define DOUBLE	"\e[32m[ DOUBLE ]\e[0m -> "

# define CHAR_MAX	127
# define CHAR_MIN	-128
# define INT_MAX	2147483647
# define INT_MIN	-2147483648

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
