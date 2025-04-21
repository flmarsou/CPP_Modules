/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:19:49 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/21 16:37:07 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// ========================================================================== //
//   Constructors                                                             //
// ========================================================================== //

RPN::RPN()
{

}

RPN::RPN(const RPN &other)
{
	(void)other;
}

RPN::~RPN()
{

}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

RPN	&RPN::operator=(const RPN &other)
{
	(void)other;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

static bool	issign(const char &c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (true);
	return (false);
}

static bool	parseRPN(const std::string &argv)
{
	bool			isDigit;
	unsigned int	digitFound;
	unsigned int	signFound;

	isDigit = false;
	digitFound = 0;
	signFound = 0;
	for (unsigned int i = 0; argv[i]; i++)
	{
		if (!isdigit(argv[i]) && !isspace(argv[i]) && !issign(argv[i]))
		{
			std::cerr << ERROR "Wrong character found in argv[" << i << "]!" << std::endl;
			return (false);
		}
		if (!isdigit(argv[i]))
			isDigit = false;
		if (isDigit && isdigit(argv[i]))
		{
			std::cerr << ERROR "Consecutive digits found in argv[" << i << "]!" << std::endl;
			return (false);
		}
		if (isdigit(argv[i]))
		{
			digitFound++;
			isDigit = true;
		}
		if (issign(argv[i]))
			signFound++;
	}
	if (digitFound - signFound < 1)
	{
		std::cerr << ERROR "!";
	}
	std::cout << digitFound - signFound << std::endl;
	return (true);
}

void	RPN::executeRPN(const std::string &argv)
{
	if (!parseRPN(argv))
		return ;
}
