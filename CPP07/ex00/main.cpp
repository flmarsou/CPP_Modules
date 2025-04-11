/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:11:51 by flmarsou          #+#    #+#             */
/*   Updated: 2025/04/11 13:49:58 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	testWithFloat()
{
	float	a;
	float	b;

	a = 4.2f;
	b = 2.4f;

	std::cout << "Before Swap: a = " << a << " | b = " << b << std::endl;
	swap(a, b);
	std::cout << "After Swap: a = " << a << " | b = " << b << std::endl;

	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
}

void	testWithString()
{
	std::string	a;
	std::string	b;

	a = "Hello";
	b = "World";

	std::cout << "Before Swap: a = " << a << " | b = " << b << std::endl;
	swap(a, b);
	std::cout << "After Swap: a = " << a << " | b = " << b << std::endl;

	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
}

void	testWithInt()
{
	int	a;
	int	b;

	a = 4;
	b = 2;

	std::cout << "Before Swap: a = " << a << " | b = " << b << std::endl;
	swap(a, b);
	std::cout << "After Swap:  a = " << a << " | b = " << b << std::endl;

	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
}

void	testWithChar()
{
	char	a;
	char	b;

	a = 'F';
	b = 'M';

	std::cout << "Before Swap: a = '" << a << "' | b = '" << b << "'" << std::endl;
	swap(a, b);
	std::cout << "After Swap: a = '" << a << "' | b = '" << b << "'" << std::endl;

	std::cout << "min(a, b) = '" << min(a, b) << "'" << std::endl;
	std::cout << "max(a, b) = '" << max(a, b) << "'" << std::endl;
}

int	main()
{
	std::cout << "--- Test with Chars ---" << std::endl;
	testWithChar();
	std::cout << "\n--- Test with Ints ---" << std::endl;
	testWithInt();
	std::cout << "\n--- Test with Strings ---" << std::endl;
	testWithString();
	std::cout << "\n--- Test with Floats ---" << std::endl;
	testWithFloat();

	return (0);
}
