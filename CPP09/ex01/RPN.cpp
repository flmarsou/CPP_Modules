/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:19:49 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/22 12:24:45 by flmarsou         ###   ########.fr       */
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

// Checks if the input has only correct characters (digits, operands, spaces).
static bool	parseInput(const std::string &input)
{
	for (unsigned i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]) && !issign(input[i]) && input[i] != ' ')
		{
			std::cerr << ERROR "Unrecongized character '" << input[i] << "'!" << std::endl;
			return (false);
		}
	}

	return (true);
}

// Checks if the two first symbols are digits.
static bool	parseStart(const std::string &input)
{
	unsigned int	i;

	i = 0;
	while (input[i] == ' ')
		i++;
	if (!isdigit(input[i]))
	{
		std::cerr << ERROR "First symbol must be a digit!" << std::endl;
		return (false);
	}
	i++;
	while (input[i] == ' ')
		i++;
	if (!isdigit(input[i]))
	{
		std::cout << ERROR "Second symbol must be a digit!" << std::endl;
		return (false);
	}

	return (true);
}

// Checks if the input is possible for RPN.
static bool	parseRPN(const std::string &input)
{
	unsigned int	nbrOfDigits;
	unsigned int	nbrOfOperands;
	bool			foundDigit;

	nbrOfDigits = 0;
	nbrOfOperands = 0;
	foundDigit = false;
	for (unsigned int i = 0; input[i]; i++)
	{
		if (isdigit(input[i]) && foundDigit)
		{
			std::cerr << ERROR "Consecutive digits found!" << std::endl;
			return (false);
		}
		if (isdigit(input[i]))
		{
			nbrOfDigits++;
			foundDigit = true;
		}
		else if (issign(input[i]))
		{
			nbrOfOperands++;
			foundDigit = false;
		}
		else
			foundDigit = false;
	}

	const int	result = nbrOfDigits - nbrOfOperands;
	if (result > 1)
	{
		std::cerr << ERROR "Not enough operands, add " << result - 1 << " more!" << std::endl;
		return (false);
	}
	else if (result < 1)
	{
		std::cerr << ERROR "Too many operands, remove " << std::abs(result) + 1 << " more!" << std::endl;
		return (false);
	}

	return (true);
}

void	RPN::executeRPN(const std::string &input)
{
	int	a;
	int	b;

	if (!parseInput(input) || !parseStart(input) || !parseRPN(input))
		return ;

	// Performs RPN
	for (unsigned i = 0; input[i]; i++)
	{
		// Pushes the digit (string > int) into the stack.
		if (isdigit(input[i]))
			this->_stack.push(input[i] - '0');
		else if (issign(input[i]))
		{
			// Temporarily take the first and second element of the stack before removing them.
			a = this->_stack.top();
			this->_stack.pop();
			b = this->_stack.top();
			this->_stack.pop();

			// Performs the operation.
			if (input[i] == '+')
				this->_stack.push(b + a);
			else if (input[i] == '-')
				this->_stack.push(b - a);
			else if (input[i] == '*')
				this->_stack.push(b * a);
			else
			{
				if (a == 0 || b == 0)
				{
					std::cerr << ERROR "Division by 0!" << std::endl;
					return ;
				}
				this->_stack.push(b / a);
			}
		}
	}

	if (this->_stack.size() != 1)
	{
		std::cerr << ERROR "Invalid RPN expression!" << std::endl;
		return ;
	}
	std::cout << this->_stack.top() << std::endl;
}
